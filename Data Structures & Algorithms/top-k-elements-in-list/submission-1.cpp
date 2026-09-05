class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for(int num : nums){
            count[num]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> minheap;
for(auto & entry : count){
    minheap.push({entry.second, entry.first});
    if(minheap.size() > k ){
        minheap.pop();
    }
}
vector<int> res;
for(int i = 0; i < k; i++){
    res.push_back(minheap.top().second);
    minheap.pop();
}
return res;
    }
};
