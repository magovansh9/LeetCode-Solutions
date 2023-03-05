class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        count=0
        intervals.sort()
        
        prevEnd = intervals[0][1]
        for i in range(1,len(intervals)):
            start,end = intervals[i]
            
            # if not overlapping
            if start>=prevEnd:
                prevEnd = end
            else:
                count+=1
                prevEnd = min(prevEnd,end)
        return count
                