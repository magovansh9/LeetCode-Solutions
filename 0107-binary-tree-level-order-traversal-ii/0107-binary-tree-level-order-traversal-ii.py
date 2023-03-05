# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrderBottom(self, root: Optional[TreeNode]) -> List[List[int]]:
        levels=[]
        if root is None:
            return levels
        queue=collections.deque([root])
        
        level=0
        while queue:
            levels.append([])
            for i in range(len(queue)):
                curr=queue.popleft()
                
                levels[level].append(curr.val)
                
                if curr.left:
                    queue.append(curr.left)
                if curr.right:
                    queue.append(curr.right)
            level+=1
        
        return reversed(levels)
                
        