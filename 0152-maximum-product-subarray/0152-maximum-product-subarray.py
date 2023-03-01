class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        result = min_so_far = max_so_far = nums[0]
        for i in range(1,len(nums)):
            curr = nums[i]
            temp_max = max(curr,max_so_far*curr,min_so_far*curr)
            min_so_far = min(curr,max_so_far*curr,min_so_far*curr)
            
            max_so_far = temp_max
            
            result = max(max_so_far,result)
            
        return result
            
        