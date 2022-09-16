class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        s_t, t_s= {}, {}
        for i in range(len(s)):
            if(s[i] not in s_t and t[i] not in t_s):
                s_t[s[i]]=t[i]
                t_s[t[i]]=s[i]
            else:
                if(s[i] in s_t):
                    if(s_t[s[i]]!=t[i]):
                        return False;
                elif(t[i] in t_s):
                    if(t_s[t[i]]!=s[i]):
                        return False
        return True