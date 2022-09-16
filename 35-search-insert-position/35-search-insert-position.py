class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        for i in range(len(nums)):
            if(nums[i]==target or nums[i]>target):
                return i
            elif(i==len(nums)-1):
                return len(nums)
        