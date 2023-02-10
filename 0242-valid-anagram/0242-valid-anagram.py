class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s)!=len(t):
            return False
        counter=[0]*26
        for letter in s:
            counter[ord(letter)-ord('a')]+=1
        for letter in t:
            counter[ord(letter)-ord('a')]-=1
        for num in counter:
            if num!=0:
                return False
        return True

        