class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int R = grid.size();
        int C = grid[0].size();
        queue<pair<int,int>> q;
        int fresh = 0;
        int time = 0;
        for(int i = 0; i<R;i++)
        {
            for(int j = 0; j<C; j++)
            {
                if(grid[i][j] == 2)q.push({i,j});
                if(grid[i][j] == 1) fresh++;
            }
        }
        vector<pair<int,int>> dirs = {{0,1},{0,-1},{1,0},{-1,0}};
        while(!q.empty() && fresh > 0)
        {
            int length = q.size();
            for(int i=0; i<length; i++){
                auto curr = q.front();
                q.pop();
                int r = curr.first;
                int c = curr.second;

                for(const auto& dir: dirs)
                {
                    int row = r + dir.first;
                    int col = c + dir.second;
                    if(row>=0 && row<R && col>=0 && col<C && grid[row][col]==1)
                    {
                        grid[row][col] = 2;
                        q.push({row,col});
                        fresh--;
                    }
                }
            }
            time++;
        }
        return fresh == 0 ? time : -1;
    }
};
