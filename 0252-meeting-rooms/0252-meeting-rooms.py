class Solution:
    def canAttendMeetings(self, intervals: List[List[int]]) -> bool:
        if not intervals:
            return True
        intervals.sort()
        
        prevEnd = intervals[0][1]
        for i in range(1,len(intervals)):
            start,end = intervals[i]
            # if overlapping
            if start<prevEnd:
                return False
            # if not overlapping
            else:
                prevEnd=end
        return True
                
                
        