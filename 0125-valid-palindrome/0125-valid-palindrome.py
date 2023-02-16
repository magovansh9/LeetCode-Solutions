class Solution:
    def isPalindrome(self,s:str)-> bool:
        alnumStr=("".join(c for c in s if c.isalnum())).lower()
        low,high=0,len(alnumStr)-1
        while(low<high):
            if alnumStr[low]!=alnumStr[high]:
                return False
            low+=1
            high-=1
        return True
