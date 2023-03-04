# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        curr=head
        length=0
        while curr:
            length+=1
            curr=curr.next
        
        if length==n:
            head=head.next
            return head
        else:
            curr,i=head,0
            while i<length-n-1:
                curr=curr.next
                i+=1
            curr.next=curr.next.next
        return head
            
        