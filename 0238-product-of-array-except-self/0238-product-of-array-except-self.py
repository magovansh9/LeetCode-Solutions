class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        prefix,suffix=[1]*len(nums),[1]*len(nums)
        curr=1
        for i in range(1,len(nums)):
            curr*=nums[i-1]
            prefix[i]=curr
        curr=1
        for i in reversed(range(0,len(nums)-1)):
            curr*=nums[i+1]
            suffix[i]=curr
        for i in range(len(nums)):
            nums[i]=suffix[i]*prefix[i]
        return nums