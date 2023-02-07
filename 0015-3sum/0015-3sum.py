class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        res=[]
        nums.sort()
        for i in range(len(nums)):
            if(nums[i]>0):
                break
            if i==0 or nums[i-1]!=nums[i]:
                self.twoSum(nums,i,res)
        return res
                
    def twoSum(self,nums:List[int],i:int,res:List[List[int]]):
        low,high=i+1,len(nums)-1
        while(low<high):
            numSum=nums[i]+nums[low]+nums[high]
            if(numSum<0):
                low+=1
            elif(numSum>0):
                high-=1
            else:
                res.append([nums[i],nums[low],nums[high]])
                low+=1
                high-=1
                while low<high and nums[low]==nums[low-1]:
                    low+=1
            

            