class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int,vector<int>> maxheap;
        for(int num: stones){
            maxheap.push(num);
        }
        while(maxheap.size() > 1){
            int x = maxheap.top();
            maxheap.pop();
            int y = maxheap.top();
            maxheap.pop();
            if(x >= y){
                maxheap.push(x-y);
            }
            else{
                maxheap.push(y-x);
            }
        }
        return maxheap.top();
    }
};
