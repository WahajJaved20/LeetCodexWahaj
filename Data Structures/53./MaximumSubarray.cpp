class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int finalSum=INT_MIN;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum = max(nums[i],sum+nums[i]);
            finalSum = max(sum,finalSum);
        }
        return finalSum;
    }
};
