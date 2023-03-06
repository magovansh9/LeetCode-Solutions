class Solution:
    def canPermutePalindrome(self, s: str) -> bool:
        count=[0]*26
        for c in s:
            count[ord(c)-ord('a')]+=1
        oddCount=0
        for num in count:
            if num%2!=0:
                oddCount+=1
        return oddCount<=1