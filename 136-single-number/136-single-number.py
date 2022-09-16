class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        uniqueNums= set()
        uniqueSum, listSum = 0,0
        for num in nums:
            uniqueNums.add(num)
            listSum+=num
        for num in uniqueNums:
            uniqueSum+=2*num
        return uniqueSum-listSum
    
        