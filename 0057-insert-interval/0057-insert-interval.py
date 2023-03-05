class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
        res = []
        
        for i in range(len(intervals)):
            # if newInterval is less than current interval
            if newInterval[1]<intervals[i][0]:
                res.append(newInterval)
                return res + intervals[i:]
            # if new interval is greater than current interval
            elif newInterval[0]>intervals[i][1]:
                res.append(intervals[i])
            # if new intervals needs to merge
            else:
                newInterval= [min(newInterval[0],intervals[i][0]),max(newInterval[1],intervals[i][1])]
            
        res.append(newInterval)
        
        return res
        