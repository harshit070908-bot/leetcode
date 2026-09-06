#include <vector>
#include <iostream>
#include <thread>
#include <chrono>

    std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix){
        size_t rows {matrix.size()}, columns {matrix[0].size()};
        std::vector<int> result;

        int minimum = std::min(rows, columns);

        for(size_t i {}; i < minimum/2; i++){
            int row = i, column = i;
            bool checked {};
            while(1){
                std::cout << row << ' ' << column << std::endl;
                std::this_thread::sleep_for(std::chrono::seconds(2));
                std::this_thread::sleep_for(std::chrono::milliseconds(500));

                if(row == i and column == i){
                    if(checked) break;
                    checked = 1;
                }

                if(row == i && column != columns-i-1){
                    result.push_back(matrix[row][column]);
                    column++;
                }else if(row != rows-i-1 && column == columns-i-1){
                    result.push_back(matrix[row][column]);
                    row++;
                }else if(row == rows-i-1 && column != i){
                    result.push_back(matrix[row][column]);
                    column--;
                }else if(row != i && column == i){
                    result.push_back(matrix[row][column]);
                    row--;
                }
            }
        }

        if(minimum % 2 == 1){
            if(rows <= columns){
                for(int i {minimum/2}; i < columns - (minimum/2); i++){
                    result.push_back(matrix[minimum/2][i]);
                }
            }else{
                for(int i {minimum/2}; i < rows - (minimum/2); i++){
                    result.push_back(matrix[i][minimum/2]);
                }
            }
        }

        return result;
    }

int main(){
    std::vector<std::vector<int>> matrix {{6, 9, 7}};

    auto result = spiralOrder(matrix);

    for(auto i : result){
        std::cout << i << ' ';
    }

}