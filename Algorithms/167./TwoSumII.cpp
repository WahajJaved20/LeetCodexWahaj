class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        for(int i=0;i<numbers.size();i++){
            int t = target - numbers[i];
            int left=i+1,right=numbers.size();
            while(left < right){
                int mid = (left+right)/2;
                if(numbers[mid] >= t){
                    right = mid;
                }else{
                    left = mid+1;
                }
            }
            if(left<numbers.size() && numbers[left] == t){
                res.push_back(i+1);
                res.push_back(left+1);
                break;
            }
        }
        return res;
    }
};
