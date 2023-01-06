class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int target = nums.size();
        int counter = 0;
        int i=0;
        while(i<target){
            if(nums[i]!=0){
                nums[counter++] = nums[i];
            }
            i++;
        }
        while(counter<target){
            nums[counter++] = 0;
        }
    }
};
