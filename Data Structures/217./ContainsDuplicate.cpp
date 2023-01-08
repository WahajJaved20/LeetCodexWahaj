class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,bool> mp;
        for(int i=0;i<nums.size();i++){
            if(!mp[nums[i]]){
                mp[nums[i]] = true;
            }else{
                return true;
            }
        }
        return false;
    }
};
