class Solution:
    def findRestaurant(self, list1: List[str], list2: List[str]) -> List[str]:
        hmap, ans, minSum={},[],float('inf')
        for i,res in enumerate(list1):
            hmap[res]=i
        for i,res in enumerate(list2):
            if(res in hmap):
                lSum=hmap[res]+i
                if(lSum<minSum):
                    ans.clear()
                    ans.append(res)
                    minSum=lSum
                elif(lSum==minSum):
                    ans.append(res)
        return ans