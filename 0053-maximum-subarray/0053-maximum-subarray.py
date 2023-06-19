class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        numSum=maxSum=nums[0]
        i=1
        while i<len(nums):
            if numSum<0:
                numSum=0
            numSum+=nums[i]
            maxSum=max(maxSum,numSum)
            i+=1
        return maxSum        