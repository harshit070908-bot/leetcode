#include <string>

class Solution {
public:
    std::string convert(std::string s, int numRows) {
        if(numRows == 1) return s;
        std::string result {};
        int cycleSize {(numRows - 1) * 2}, size = s.size();
        
        for(int r {}; r < numRows; r++){
            int index {r};
            if(r == 0 || r == numRows-1){
                while(index < size){
                    result += s[index];
                    index += cycleSize;
                }
            }else{
                int cycle {1};
                while(index < size){
                    result += s[index];
                    if(cycle * cycleSize - r < size){
                        result += s[cycle * cycleSize - r];
                    }
                    index += cycleSize;
                    cycle++;
                }
            }
        }

        return result;
    }
};