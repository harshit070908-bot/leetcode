#include <queue>
#include <vector>
#include <utility>
#include <unordered_map>

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        std::priority_queue<std::pair<int, int>> pq;

        for (auto& entry : freq) {
            pq.push({entry.second, entry.first});
        }

        std::vector<int> result;

        while (k--) {
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;
    }
};