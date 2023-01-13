class Solution {
public:
    void findCombination(vector<vector<int>> &res, vector<int> temp, int index, int n, int k){
        if(temp.size() == k){
            res.push_back(temp);
            return;
        }
        for(int i = index; i < n; i++){
            temp.push_back(i+1);
            findCombination(res, temp, i+1, n, k);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        findCombination(res, vector<int>(), 0, n, k);
        return res;
    }
};
