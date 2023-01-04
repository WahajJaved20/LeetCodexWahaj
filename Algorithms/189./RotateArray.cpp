class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> res;
        res.resize(nums.size());
        for(int i=0;i<nums.size();i++){
            res[(i+k)%nums.size()] = nums[i];
        }
        for(int i=0;i<nums.size();i++){
            nums[i] = res[i];
        }
    }
};
