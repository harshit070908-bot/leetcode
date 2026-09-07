#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

class Solution {
public:
    std::vector<std::string> findRestaurant(std::vector<std::string>& list1, std::vector<std::string>& list2) {
        std::vector<std::string> result;
        std::unordered_map<std::string, int> index;

        for(int i {}; i < list1.size(); i++){
            index[list1[i]] = i;
        }

        int min = INT_MAX;
        for(int i {}; i < list2.size(); i++){
            if(index.find(list2[i]) != index.end()){
                int sum = i + index[list2[i]];
                if(sum < min){
                    result.clear();
                    min = sum;
                }else if(sum > min){
                    continue;
                }
                result.push_back(list2[i]);
            }
        }

        return result;
    }
};