# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        itr,numNodes=head,0
        while(itr):
            numNodes+=1
            itr=itr.next
            
        itr,i=head,0
        while(i<int(numNodes/2)):
            itr=itr.next
            i+=1
        return itr

        