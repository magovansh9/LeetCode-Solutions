class Solution:
    def isValid(self, s: str) -> bool:
        hashmap={'(':')','[':']','{':'}'}
        stack=[]
        for bkt in s:
            if bkt in hashmap:
                stack.append(bkt)
            else:
                if stack:
                    openBkt=stack.pop()
                    if hashmap[openBkt]!=bkt:
                        return False
                else:
                    return False
        return stack==[]
            
        
        