class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        maxSum=currSum=nums[0]
        l=1
        while l<len(nums):
            if currSum<0:
                currSum=0
            currSum+=nums[l]
            maxSum=max(maxSum,currSum)
            l+=1
        return maxSum
        
        