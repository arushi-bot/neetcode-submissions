class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> numset;
        for(int num : nums){
            if(numset.find(num)!=numset.end()){
                return true;
            }
            else{
                numset.insert(num);
            }
        }
        return false;
        

    }
};
