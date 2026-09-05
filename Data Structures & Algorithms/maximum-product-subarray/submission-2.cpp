class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProduct = nums[0];
        int curMin = 1, curMax = 1;

        for(int num : nums){
            int tmp = curMax * num ;
            curMax = max(max(curMin * num,curMax * num),num);
            curMin = min(min(curMin * num,tmp),num);
            maxProduct = max(maxProduct,curMax);
        }
        return maxProduct;
    }
};
