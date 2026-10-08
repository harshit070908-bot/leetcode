#include <vector>

class Solution {
public:
    void island(std::vector<std::vector<char>>& grid, int i, int j, size_t row, size_t col){
        if(i < 0 || i == row || j < 0 || j == col || grid[i][j] == '0') return;
            
        grid[i][j] = '0';

        island(grid, i + 1, j, row, col);
        island(grid, i - 1, j, row, col);
        island(grid, i, j + 1, row, col);
        island(grid, i, j - 1, row, col);
    }

    int numIslands(std::vector<std::vector<char>>& grid) {
        int result {};

        size_t row {grid.size()};
        size_t col {grid[0].size()};

        for(int i {}; i < row; i++){
            for(int j {}; j < col; j++){
                if(grid[i][j] != '0'){
                    island(grid, i, j, row, col);
                    result++;
                }
            }
        }

        return result;
    }
};