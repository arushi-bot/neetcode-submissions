class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t output;
        output = 0;
        for(int i = 0; i < 32; i++){
            output = output*2; 
            if(n%2 == 1){
                output +=1;
            }
            n = n/2;
        }
        return output;
    }
};
