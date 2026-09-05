#include <vector>

class Solution {
public:
    void rotate(std::vector<std::vector<int>>& matrix) {
        int size = matrix.size() - 1;

        for(int i {}; i < (size + 1)/2; i++){
            for(int j {i}; j < size-i; j++){
                std::swap(matrix[i][j], matrix[size-j][i]);
                std::swap(matrix[size-j][i], matrix[size-i][size-j]);
                std::swap(matrix[size-i][size-j], matrix[j][size-i]);
            }
        }
    }
};