#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> matrixReshape(std::vector<std::vector<int>>& mat, int r, int c) {
        if(mat.size() * mat[0].size() != r * c || mat.size() == r) return mat;

        std::vector<std::vector<int>> reMat(r, std::vector<int> (c, 0));

        int count {};
        for(const auto& i : mat){
            for(const auto j : i){
                int row = count / c;
                int column = count++ % c;
                reMat[row][column] = j;
            }
        }

        return reMat;
    }
};