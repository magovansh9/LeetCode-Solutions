class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s)!=len(t):
            return False
        counter=defaultdict(int)
        for l in s:
            counter[l]+=1
        for l in t:
            counter[l]-=1
        for num in counter.values():
            if num!=0:
                return False
        return True
        