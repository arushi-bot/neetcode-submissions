class Solution {
public:
    int findDuplicate(std::vector<int>& nums) {
        for (int num : nums) {
            int absNum = std::abs(num);
            if (nums[absNum - 1] < 0) {
                return absNum;
            } else {
                nums[absNum - 1] *= -1;
            }
        }
        return 0; // Should not reach here if there's always a duplicate
    }
};