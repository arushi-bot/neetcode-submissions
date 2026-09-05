class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> maxarray(nums.size(),0);
        maxarray[0] = nums[0];
        maxarray[1] = max(nums[0],nums[1]);
        for(int i =2 ; i< nums.size();i++ ){
            maxarray[i] = max(maxarray[i-1],maxarray[i-2]+nums[i]);
        }
        return maxarray[nums.size()-1];

    }
};
