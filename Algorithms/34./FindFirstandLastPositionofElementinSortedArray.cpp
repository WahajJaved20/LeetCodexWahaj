class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2,-1);
        if(nums.size()==0){
            return res;
        }
        int left=0,right=nums.size();
        while(left < right){
            int mid = (left+right)/2;
            if(mid < nums.size() && nums[mid] >= target){
                right = mid;
            }else{
                left = mid+1;
            }
        }
        if(left < nums.size() && nums[left] == target){
            if(left - 1 >= 0 &&  nums[left-1] == target){
                res[0] = left-1;
                res[1] = left;
            }else{
                res[0] = left;
                if(left + 1 < nums.size() && nums[left + 1] == target){
                    while(left + 1 < nums.size() && nums[left + 1] == target){
                        left ++;
                    }
                    res[1] = left;
                }else{
                    res[1] = left;
                }
               
            }
        }
        return res;
    }
};
