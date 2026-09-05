class Solution {
public:
    int findDuplicate(std::vector<int>& nums) {
        for (int i = 0 ; i < nums.size() ; i++) {
            int absNum = abs(nums[i]);
            if (nums[absNum - 1] < 0) {
                return absNum;
            } else {
                nums[absNum - 1] *= -1;
            }
        }
        return 0; // Should not reach here if there's always a duplicate
    }
};