class Solution:
    def countBits(self, n: int) -> List[int]:
        
        def pop_count(x: int) -> int:
            count=0
            while x:
                count+=1
                x&=x-1
            return count
        
        ans=[0]*(n+1)
        for i in range(n+1):
            ans[i]=pop_count(i)
        return ans