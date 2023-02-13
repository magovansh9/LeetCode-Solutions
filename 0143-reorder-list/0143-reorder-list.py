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
        if head is None:
            return None
        
        length=0
        curr=head
        stack=[]
        while(curr):
            length+=1
            stack.append(curr)
            curr=curr.next
        
        node=head
        for i in range(length//2):
            next=stack.pop()
            temp=node.next
            
            node.next=next
            next.next=temp
            
            node=temp
        
        node.next=None
        
            
        
        
        
        