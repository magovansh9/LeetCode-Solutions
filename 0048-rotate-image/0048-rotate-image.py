class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        left,right=0,len(matrix[0])-1
        
        while left<right:
            for i in range(right-left):
                top,bottom = left,right
                # save the top left val in a variable
                topLeft = matrix[top][left+i]
                
                # move bottom left to top left
                matrix[top][left+i] = matrix[bottom-i][left]
                
                # move bottom right to bottom left
                matrix[bottom-i][left] = matrix[bottom][right-i]
                
                # move top right to bottom right
                matrix[bottom][right-i] = matrix[top+i][right]
                
                # move the topLeft value to top right
                matrix[top+i][right] = topLeft
            
            left+=1
            right-=1
            
                
        