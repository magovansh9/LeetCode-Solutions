class Solution:
    def isValid(self, s: str) -> bool:
        hashmap={"(":")","[":"]","{":"}"}
        stack=[]
        
        for bkt in s:
            if bkt=="(" or bkt=="[" or bkt=="{":
                stack.append(bkt)
            else:
                if len(stack)!=0:
                    openBkt=stack.pop()
                    if(hashmap[openBkt]!=bkt):
                        return False
                else:
                    return False
        return len(stack)==0
        