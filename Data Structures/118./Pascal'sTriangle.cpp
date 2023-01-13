class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        res.resize(numRows);

        for(int i=0;i<res.size();i++){
            res[i].resize(i+1);
            for(int j=0;j<=i;j++){
                if(i-1>=0 && j-1 < res[i-1].size() && j-1>=0 && j<res[i-1].size()){
                    res[i][j] = res[i-1][j]+res[i-1][j-1];
                }else{
                    res[i][j]=1;
                }
            }
        }
        return res;
    }
};
