class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s)!=len(t):
            return False
        counter=[0]*26
        for l in s:
            counter[ord(l)-ord('a')]+=1
        for l in t:
            counter[ord(l)-ord('a')]-=1
        for num in counter:
            if num!=0:
                return False
        return True
        