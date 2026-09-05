class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count;
        while(n > 0){
            if(n % 2 == 1 ){
                count++;
            }
            n = n / 2;
        }
        return count;

    }
};
