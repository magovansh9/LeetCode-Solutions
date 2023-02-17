class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        missing=0
        
        # Using XOR add each number that should be in the list
        for i in range(len(nums)+1):
            missing ^= i
        
        # Using XOR subtract each number that should be in the list
        for num in nums:
            missing ^= num
        
        return missing
        
        