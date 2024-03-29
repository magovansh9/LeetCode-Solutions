class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l,r=0,len(nums)-1
        while l<=r:
            mid=l+(r-l)//2
            if nums[mid]==target:
                return mid
            elif nums[mid]>=nums[0]:
                if target>=nums[0] and target<nums[mid]:
                    r=mid-1
                else:
                    l=mid+1
            else:
                if target<=nums[len(nums)-1] and target>nums[mid]:
                    l=mid+1
                else:
                    r=mid-1
        return -1
        