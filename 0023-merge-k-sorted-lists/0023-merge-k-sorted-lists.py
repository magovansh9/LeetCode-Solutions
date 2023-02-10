# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        numLists=len(lists)
        finalHead=ListNode(-1)
        finalList=finalHead
        
        nullListCounter=0
        while(nullListCounter!=numLists):
            currMin,minListIndex=float('inf'),-1
            for i in range(numLists):
                if lists[i]:
                    if(currMin>lists[i].val):
                        currMin=lists[i].val
                        minListIndex=i
            if finalList:
                finalList.next=lists[minListIndex]
            if lists[minListIndex]:
                lists[minListIndex]=lists[minListIndex].next
            if(lists[minListIndex]==None):
                nullListCounter+=1
            if finalList:
                finalList=finalList.next
        return finalHead.next
            
                
                
                    
            
        