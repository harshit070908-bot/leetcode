#include <vector>

class Solution {
public:
    bool canPlaceFlowers(std::vector<int>& flowerbed, int n){
        int result {};

        if(flowerbed.size() == 1){
            return (flowerbed[0]) ? n <= 0 : n <= 1;
        }

        for(int i {}; i < flowerbed.size(); i++){
            if(i == 0){
                if(!flowerbed[i] && !flowerbed[i+1]){
                    result++;
                    i++;
                }
            }else if(i == flowerbed.size() - 1){
                if(!flowerbed[i-1] && !flowerbed[i]){
                    result++;
                    i++;
                }
            }else if(!flowerbed[i+1] && !flowerbed[i-1] && !flowerbed[i]){
                result++;
                i++;
            }
        }

        return n <= result;
    }
};