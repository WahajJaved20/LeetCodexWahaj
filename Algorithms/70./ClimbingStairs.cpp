class Solution {
public:
    int climbStairs(int n) {
        vector<int> res(n+1);
        if(n==1){
            return n;
        }
        res[1] = 1;
        res[2] = 2;
        for(int i=3;i<=n;i++){
            res[i] = res[i-1] + res[i-2];
        }
        return res[n];
    }
};
