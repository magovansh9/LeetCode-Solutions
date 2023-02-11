class Solution:
    def isPalindrome(self, s: str) -> bool:
        alphaS=(''.join(c for c in s if c.isalnum())).lower()
        for i in range(len(alphaS)):
            if alphaS[i]!=alphaS[len(alphaS)-1-i]:
                return False
        return True
        
        