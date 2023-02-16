# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        ansNode=root
        def recurseTree(node):
            nonlocal ansNode
            if node is None:
                return False
            
            left=recurseTree(node.left)
            
            right=recurseTree(node.right)
            
            mid=node==q or node==p
            
            if mid+left+right>=2:
                ansNode=node

            
            return mid or left or right
        recurseTree(root)
        return ansNode