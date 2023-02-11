class Solution:
    def isPalindrome(self, s: str) -> bool:
        alphaS=(''.join(c for c in s if c.isalnum())).lower()
        stack=[]
        for c in alphaS:
            stack.append(c)
        for i in range(len(alphaS)//2):
            if stack.pop()!=stack[i]:
                return False
        return True
            
            
        
        