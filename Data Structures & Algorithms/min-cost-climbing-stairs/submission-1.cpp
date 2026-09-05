class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int size=cost.size();
        vector<int> costToReach(size+1,0);
        
        for(int i = 2;i<costToReach.size();i++){
            costToReach[i]=min((cost[i-1]+costToReach[i-1]),(cost[i-2]+costToReach[i-2]));
        }
        return costToReach[size];
        
    }
};
