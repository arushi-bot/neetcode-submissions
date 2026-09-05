class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet;
        int maxLength=0;
        for(int num : nums){
            numSet.insert(num);
        }
        for(int i=0 ; i< nums.size() ; i++){
            if(numSet.count(nums[i]-1)) continue;
            int length = 1;
            while(numSet.count(nums[i]+length)) length++;
            maxLength = max(maxLength,length);
        }

        return maxLength;
    }
};
