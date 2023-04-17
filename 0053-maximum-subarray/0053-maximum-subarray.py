class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        maxSum=numSum=nums[0]
        for i in range(1,len(nums)):
            if numSum<0:
                numSum=0
            numSum+=nums[i]
            maxSum=max(maxSum,numSum)
        return maxSum
        