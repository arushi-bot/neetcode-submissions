class Solution {
public:
int R,C;
        set<pair<int,int>> visited;
        bool exist(vector<vector<char>>& board, string word) {
        R = board.size();
        C = board[0].size();
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if (find(i,j,board,0,word)) {
                    return true;
                }
            }
        }
        return false;
    }
    bool find(int i,int j,vector<vector<char>> board,int pos,string word){
        
        if(pos == word.length()){
            return true;
        }
        
        if(i<0 || j<0 || j >=C || i>=R || board[i][j] != word[pos] || visited.count({i,j})){
            return false;
        }

        visited.insert({i,j});
        bool res = find(i+1,j,board,pos+1,word) ||
                    find(i,j+1,board,pos+1,word) ||
                     find(i-1,j,board,pos+1,word) ||
                      find(i,j-1,board,pos+1,word);
        visited.erase({i,j});
        return res;
    }
};
