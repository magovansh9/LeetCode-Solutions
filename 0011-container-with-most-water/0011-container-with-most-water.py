class Solution:
    def maxArea(self, height: List[int]) -> int:
        maxArea=0
        l,r=0,len(height)-1
        while(l<r):
            bdth=r-l
            hght=min(height[r],height[l])
            maxArea=max(maxArea,bdth*hght)
            if(height[l]<height[r]):
                l+=1
            elif(height[r]<height[l]):
                r-=1
            else:
                l+=1
        return maxArea
        