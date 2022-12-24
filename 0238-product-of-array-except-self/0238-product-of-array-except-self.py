class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        res=[1]*(len(nums))
        pre,post=1,1
        for i in range(1,len(nums)):
            pre=pre*nums[i-1]
            res[i]=pre
        for i in reversed(range(0,len(nums)-1)):
            post=post*nums[i+1]
            res[i]=res[i]*post
        return res
            