class Solution {
    int IsLandCount = 0;
public:
    int numIslands(vector<vector<char>>& grid)
    {
        int R = grid.size();
        int C = grid[0].size();
        for(int i =0; i<R;i++)
        {
            for(int j = 0; j<C ; j++)
            {
                if(grid[i][j] == '1')
                {
                    IsLandCount++;
                    isLand(grid,i,j,R,C);
                }
            }
        }
        return IsLandCount;    
    }
private:
    void isLand(vector<vector<char>>& grid,int i,int j,int R,int C)
    {
        if(grid[i][j] =='1'){
            grid[i][j]='0';
            if(i<R-1)isLand(grid,i+1,j,R,C);
            if(i>=1)isLand(grid,i-1,j,R,C);
            if(j>=1)isLand(grid,i,j-1,R,C);
            if(j<C-1)isLand(grid,i,j+1,R,C);
        }
        return;
    }
};
