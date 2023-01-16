class Solution {
public:
    bool isPowerOfTwo(int n) {
        // 8 = 0000 1000
        // 7 = 0000 0111
        // AND n and n-1 gives 0 so n is power of 2
        if(n<=0){
            return false;
        }else{
            return ((n&(n-1)) == 0);
        }
    }
};
