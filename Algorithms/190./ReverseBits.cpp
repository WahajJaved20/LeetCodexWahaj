class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        for(int i=0;i<32;i++){
            //starting off left shift result by 1 place so we have space if needed
            result <<= 1;
            if(n & 1 > 0){
                // then if the lsb of original number was 1, we add 1
                result ++;
            }
            // then right shift the number so the lsb becomes the msb and continue
            n >>= 1;
        }
        return result;
    }
};
