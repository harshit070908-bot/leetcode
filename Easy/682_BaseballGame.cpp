#include <string>
#include <vector>

class Solution {
public:
    int calPoints(std::vector<std::string>& operations) {
        int result {};
        std::vector<int> record;

        for(const std::string& i : operations){
            if(std::isdigit(i[0]) || i[0] == '-'){
                record.push_back(std::stoi(i));
            }else if(i == "D"){
                record.push_back(record.back()*2);
            }else if(i == "C"){
                record.pop_back();
            }else if(i == "+"){
                record.push_back(record.back() + record[record.size()-2]);
            }
        }

        for(int i : record){
            result += i;
        }
        return result;
    }
};