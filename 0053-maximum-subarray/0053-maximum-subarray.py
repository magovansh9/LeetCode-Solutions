class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        i=1
        currSum,maxSum=nums[0],nums[0]
        while(i<len(nums)):
            if(currSum<0):
                currSum=0
            currSum+=nums[i]
            maxSum=max(maxSum,currSum)
            i+=1
        return maxSum
        