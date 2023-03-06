# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        levels=[]
        if root is None:
            return levels
        q=deque([root])
        
        level=0
        while q:
            levels.append([])
            for i in range(len(q)):
                curr=q.popleft()
                
                levels[level].append(curr.val)
                
                if curr.left:
                    q.append(curr.left)
                if curr.right:
                    q.append(curr.right)
            level+=1
        return levels