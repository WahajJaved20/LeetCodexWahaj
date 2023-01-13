class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            map<char,bool> m,n;
            for(int j=0;j<9;j++){
                if(!m[board[i][j]]){
                    if(board[i][j] != '.'){
                       m[board[i][j]] = true;
                    }
                }else{
                    return false;
                }
                if(!n[board[j][i]]){
                    if(board[j][i] != '.'){
                       n[board[j][i]] = true;
                    }
                }else{
                    return false;
                }
                if(!checkSquare(board,board[i][j],i,j)){   
                    return false;
                }
            }
        }
        return true;
    }
    bool checkSquare(vector<vector<char>>& sudoku, char num, int row, int col){
        if(num == '.'){
            return true;
        }
        int squareSize = 3;
        int rowStart = row - row % squareSize;
        int colStart = col - col % squareSize;
        bool result = true;
        for (int i = rowStart; i < rowStart + squareSize; i++){
            for (int j = colStart; j < colStart + squareSize; j++){
                if (sudoku[i][j] == num){
                    if(i==row && j==col){
                        cout<<"Hehe";
                        continue;
                    }
                    
                   result = false;
                }
            }
        }
        return result;
    }
};
