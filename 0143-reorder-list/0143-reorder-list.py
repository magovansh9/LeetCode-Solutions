# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        """
        Do not return anything, modify head in-place instead.
        """
        # find the middle node
        slow=fast=head
        while fast and fast.next:
            slow=slow.next
            fast=fast.next.next
            
        # reverse the second half of the list
        curr,prev=slow,None
        while curr:
            currNext=curr.next
            curr.next=prev
            prev=curr
            curr=currNext
        
        # merge the two linked lists
        first,second=head,prev
        while second.next:
            temp=first.next
            first.next=second
            first=temp
            
            temp=second.next
            second.next=first
            second=temp
        return head
        
        
            