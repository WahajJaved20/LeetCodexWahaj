class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0,right=nums.size();
        while(left < right){
            int mid = (left+right)/2;
            if(nums[mid] >= target){
                right = mid;
            }else{
                left = mid+1;
            }
        }
        if(left<nums.size() && nums[left] == target){
            return left;
        }
        return -1;
    }
};
