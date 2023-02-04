class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        # keep track of max_so_far,min_so_far and store max_so_far in result
        max_so_far=nums[0]
        min_so_far=nums[0]
        result=max_so_far

        for i in range(1,len(nums)):
            curr=nums[i]
            temp_max=max(curr,min_so_far*curr,max_so_far*curr)
            min_so_far=min(curr,min_so_far*curr, max_so_far*curr)
            

            max_so_far=temp_max
            result=max(max_so_far,result)
        return result
        
