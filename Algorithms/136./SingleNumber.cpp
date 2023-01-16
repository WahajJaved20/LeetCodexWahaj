class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // XOR of the same number is 0 else 1
        // we take XOR and carry on with the XORing of result with the next (see in md file)
        // then return the last number it is the result
        for(int i=0;i<nums.size()-1;i++){
            nums[i+1] = nums[i] ^ nums[i+1];
        }
        return nums[nums.size()-1];
    }
};
