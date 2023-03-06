class Solution:
    def topKFrequent(self, words: List[str], k: int) -> List[str]:
        count={}
        freq=[[] for i in range(len(words)+1)]
        
        res=[]
        for word in words:
            count[word]=1+count.get(word,0)
        for word,c in count.items():
            freq[c].append(word)
        for i in reversed(range(len(freq))):
            for word in sorted(freq[i]):
                res.append(word)
                if len(res)==k:
                    return res
        return res