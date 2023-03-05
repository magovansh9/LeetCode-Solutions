class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort(key= lambda i:i[0])
        res = [intervals[0]]
        
        for i in range(1,len(intervals)):
            start, end = intervals[i]
            
            lastEnd = res[-1][1]
            
            if start<=lastEnd:
                res[-1][1]= max(lastEnd,end)
            else:
                res.append(intervals[i])
        
        return res
        