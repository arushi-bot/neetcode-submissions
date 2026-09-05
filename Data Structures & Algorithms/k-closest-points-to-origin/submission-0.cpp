class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,vector<int>>> maxheap;
        vector<vector<int>> result;
        for(vector<int> point : points){
            int distsquare = point[0]*point[0] + point[1]*point[1];
            maxheap.push({distsquare,point});
            if(maxheap.size()>k){
                maxheap.pop();
            }
        }
        while(!maxheap.empty()){
            result.push_back(maxheap.top().second);
            maxheap.pop();
        }
        return result;
    }
};
