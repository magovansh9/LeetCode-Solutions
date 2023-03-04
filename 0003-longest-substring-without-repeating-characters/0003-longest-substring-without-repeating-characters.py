class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        maxLen=0
        l=0
        strSet=set()
        for r in range(len(s)):
            while s[r] in strSet:
                strSet.remove(s[l])
                l+=1
            maxLen= max(maxLen,r-l+1)
            strSet.add(s[r])
        return maxLen
            
        