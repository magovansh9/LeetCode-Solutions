# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def largestValues(self, root: Optional[TreeNode]) -> List[int]:
        maxNumLevels=[]
        if root is None:
            return maxNumLevels
        queue=deque([root,])
        
        while queue: 
            maxNum=-math.inf
            for i in range(len(queue)):
                curr_node=queue.popleft()
                maxNum=max(maxNum,curr_node.val)

                if curr_node.left:
                    queue.append(curr_node.left)
                if curr_node.right:
                    queue.append(curr_node.right)
            maxNumLevels.append(maxNum)
        return maxNumLevels
                
            
        
        