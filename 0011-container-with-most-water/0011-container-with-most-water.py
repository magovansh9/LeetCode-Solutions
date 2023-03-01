class Solution:
    def maxArea(self, height: List[int]) -> int:
        low,high=0,len(height)-1
        maxArea=float("-inf")
        while low<high:
            l = high-low
            h = min(height[high],height[low])
            maxArea=max(maxArea,l*h)
            if height[low]<height[high]:
                low+=1
            else:
                high-=1
        return maxArea
        