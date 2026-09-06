#include <vector>

class Solution {
public:
    double findMaxAverage(std::vector<int>& nums, int k) {
        size_t size {nums.size()};

        double sum {};
        for(size_t i {}; i < k; i++){
            sum += nums[i];
        }
        double avg = sum / k;
        for(size_t i = k; i < size; i++){
            sum -= nums[i-k];
            sum += nums[i];
            avg = (avg > sum / k) ? avg : sum / k;
        }

        return avg;
    }
};