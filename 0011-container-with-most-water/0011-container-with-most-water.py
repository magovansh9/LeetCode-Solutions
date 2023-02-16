class Solution:
    def maxArea(self, height: List[int]) -> int:
        left,right=0,len(height)-1
        maxArea=float('-inf')
        while(left<right):
            l=right-left
            h=min(height[right],height[left])
            maxArea=max(maxArea,l*h)
            if(height[left]<=height[right]):
                left+=1
            else:
                right-=1
        return maxArea
            
        