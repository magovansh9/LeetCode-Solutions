# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        def validate(node,low=-math.inf,high=math.inf):
            #empty trees are valid BST
            if node is None:
                return True
            # out of bounds
            if node.val<=low or node.val>=high:
                return False
            # validate subtrees
            return validate(node.left,low,node.val) and validate(node.right,node.val,high)
        return validate(root)
        