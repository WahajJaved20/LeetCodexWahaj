class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<int> sum(triangle.size());
        int n=triangle.size();
        for(int i=n-1;i>=0;i--){
            vector<int> temp;
            temp.resize(triangle[i].size());
            for(int j=i;j>=0;j--){
                if(i==n-1){
                    temp[j] = triangle[i][j];
                }else{
                    temp[j] = triangle[i][j] + min(sum[j],sum[j+1]);
                }
            }
            sum = temp;
        }
        return sum[0];
    }
};
