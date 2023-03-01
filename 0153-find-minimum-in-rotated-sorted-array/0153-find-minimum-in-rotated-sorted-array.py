class Solution:
    def findMin(self, nums: List[int]) -> int:
        if nums[0]<nums[len(nums)-1]:
            return nums[0]
        if len(nums)==1:
            return nums[0]
        low,high=0,len(nums)-1
        while low<=high:
            mid = low + (high-low)//2
            if nums[mid]<nums[mid-1]:
                return nums[mid]
            elif nums[mid+1]<nums[mid]:
                return nums[mid+1]
            elif nums[mid]>nums[0]:
                low = mid+1
            else:
                high = mid-1
        return 0
            
        