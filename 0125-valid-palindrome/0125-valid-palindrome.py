class Solution:
    def isPalindrome(self, s: str) -> bool:
        tolowerS=''.join(c for c in s if c.isalnum()).lower()
        for i in range(0,len(tolowerS)//2):
            if tolowerS[i]!=tolowerS[len(tolowerS)-i-1]:
                return False
        return True

        