# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        def dfs(node):
            if node is None:
                return False
            elif isIdentical(node,subRoot):
                return True
            return dfs(node.left) or dfs(node.right)
        def isIdentical(node1,node2):
            if not node1 and not node2:
                return True
            if not node1 or not node2:
                return False
            if node1.val!=node2.val:
                return False
            return isIdentical(node1.left,node2.left) and isIdentical(node1.right,node2.right)
        return dfs(root)
        