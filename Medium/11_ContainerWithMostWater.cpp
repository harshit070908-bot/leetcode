#include <vector>

class Solution {
public:
    int area(const std::vector<int>& h, int left, int right){
        return (h[left] > h[right]) ? h[right] * (right - left) : h[left] * (right - left);
    }

    int maxArea(std::vector<int>& height) {
        int first{};
        int last = height.size() - 1;

        int max = area(height, first, last);

        while(first < last){
            int n = area(height, first, last);
            if(height[first] > height[last]){
                last--;
            }else{
                first++;
            }
            max = (max < n) ? n : max;
        }

        return max;
    }
};