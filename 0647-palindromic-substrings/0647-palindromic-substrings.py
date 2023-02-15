class Solution:
    def countSubstrings(self, s: str) -> int:
        count=0
        
        for i in range(len(s)):
            # odd length palindromes
            low,high=i,i
            while low>=0 and high<len(s) and s[low]==s[high]:
                low-=1
                high+=1
                count+=1
            
            # even length palindromes
            low,high=i,i+1
            while low>=0 and high<len(s) and s[low]==s[high]:
                low-=1
                high+=1
                count+=1
        
        return count
            
    
        
        