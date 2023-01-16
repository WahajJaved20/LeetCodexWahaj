class Solution {
public:
    int rob(vector<int>& nums) {
        //either pick or dont
        int prev=0,prev2=0;
        for(int i=0;i<nums.size();i++){
            int temp = prev;
            prev = max(prev2+nums[i],prev);
            prev2=temp;
        }
        return prev;
    }
};
