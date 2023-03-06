class Solution:
    def minCost(self, colors: str, neededTime: List[int]) -> int:
        i,j=0,0
        totalTime=0
        
        while i<len(neededTime) and j<len(neededTime):
            currTotal=0
            currMax=0
            
            while j<len(neededTime) and colors[i]==colors[j]:
                currTotal+=neededTime[j]
                currMax=max(currMax,neededTime[j])
                j+=1
            
            totalTime+=currTotal-currMax
            i=j
        return totalTime