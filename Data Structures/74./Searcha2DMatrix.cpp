class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int targetRow = 0;
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][0] > target){
                break;
            }
            targetRow++;
        }
        targetRow--;
        if(targetRow < 0 || targetRow > matrix.size()){
            return false;
        }
        
        int left=0,right=matrix[targetRow].size();
        while(left < right){
            int mid = (left+right)/2;
            if(matrix[targetRow][mid] >= target){
                right = mid;
            }else{
                left = mid+1;
            }
        }
        if(left<matrix[targetRow].size() && matrix[targetRow][left] == target){
            return true;
        }
        return false;
    }
};
