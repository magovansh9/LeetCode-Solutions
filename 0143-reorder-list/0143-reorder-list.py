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
        if not head:
            return None
        
        stack=[]
        size=0
        curr=head
        while curr:
            size+=1
            stack.append(curr)
            curr=curr.next
        
        i=0
        curr=head
        while i<size//2:
            nextNode=stack.pop()
            temp=curr.next
            
            curr.next=nextNode
            nextNode.next=temp
            
            curr=temp
            i+=1
            
        curr.next=None
        
            
        