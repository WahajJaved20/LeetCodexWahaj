class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if(m*n != r*c){
            return mat;
        }
        vector<vector<int>> res;
        res.resize(r);
        m=0;n=0;
        for(int i=0;i<r;i++){
            res[i].resize(c);
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                res[i][j] = mat[m][n++];
                if(n == mat[0].size()){
                    m++;
                    n=0;
                }
            }
        }
    return res;
    }
};
