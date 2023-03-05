class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        if not grid:
            return 0
        
        rows,cols = len(grid),len(grid[0])
        islands=0
        visit=set()
        
        def bfs(r,c):
            queue=collections.deque()
            visit.add((r,c))
            queue.append((r,c))
            directions=[[0,1],[0,-1],[1,0],[-1,0]]
            
            while queue:
                row,col=queue.popleft()
                for dr,dc in directions:
                    r,c=row+dr,col+dc
                    if(r in range(rows) and
                      c in range(cols) and
                      grid[r][c]=="1" and
                      (r,c) not in visit):
                        queue.append((r,c))
                        visit.add((r,c))                 
            
        for r in range(rows):
            for c in range(cols):
                if grid[r][c]=="1" and (r,c) not in visit:
                    bfs(r,c)
                    islands+=1
        return islands
        