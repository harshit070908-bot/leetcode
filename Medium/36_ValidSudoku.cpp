#include <vector>

class Solution {
public:
    bool isValidSudoku(std::vector<std::vector<char>>& board) {
        for(int i {}; i < 9; i++){
            int row[9] {};
            int column[9] {};
            for(int j {}; j < 9; j++){
                // row
                if(board[i][j] != '.'){
                    if(row[board[i][j] - '1']) return 0;
                    row[board[i][j] - '1'] = 1;
                }
                // column
                if(board[j][i] == '.') continue;
                if(column[board[j][i] - '1']) return 0;
                column[board[j][i] - '1'] = 1;
            }
        }

        for(int i {}; i < 9; i++){
            int box[9] {};
            for(int j {}; j < 9; j++){
                // box
                if(board[3*(i/3) + j/3][(i*3) % 9 + j%3] == '.') continue;
                if(box[board[3*(i/3) + j/3][(i*3) % 9 + j%3] - '1']) return 0;
                box[board[3*(i/3) + j/3][(i*3) % 9 + j%3] - '1'] = 1;
            }
        }
            
        return 1;
    }
};