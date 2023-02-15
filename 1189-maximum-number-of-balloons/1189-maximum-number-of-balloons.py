class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        hashmap={"a":0,"b":0,"l":0,"o":0,"n":0}
        for l in text:
            if l in hashmap:
                hashmap[l]+=1
        numBalloons=float("inf")
        for key in hashmap:
            if key=="b":
                numBalloons=min(numBalloons,hashmap[key])
            elif key=="a":
                numBalloons=min(numBalloons,hashmap[key])
            elif key=="l":
                 numBalloons=min(numBalloons,hashmap[key]//2)
            elif key=="o":
                numBalloons=min(numBalloons,hashmap[key]//2)
            elif key=="n":
                numBalloons=min(numBalloons,hashmap[key])
        return numBalloons
        
        