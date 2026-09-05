class Solution 
{
public:
    int maxAreaOfIsland(vector<vector<int>>& grid)
    {
        int maxArea = 0;
        int R = grid.size();
        int C = grid[0].size();

        for(int i = 0; i < R; i++)
        {
            for(int j = 0; j < C; j++)
            {
                if(grid[i][j] == 1)
                {
                    int area = 0;
                    Area(grid,i,j,R,C,area);
                    maxArea = max(area,maxArea);
                }
            }
        }
        return maxArea;
    }
private:
    void Area(vector<vector<int>>& grid, int i, int j, int R, int C,int& area)
    {
        if(grid[i][j] == 1)
        {
            area++;
            grid[i][j] = 0;
            if(i>=1)Area(grid,i-1,j,R,C,area);
            if(i<R-1)Area(grid,i+1,j,R,C,area);
            if(j>=1)Area(grid,i,j-1,R,C,area);
            if(j<C-1)Area(grid,i,j+1,R,C,area);
        }
        return;
    }
};
