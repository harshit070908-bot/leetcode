#include <vector>
#include <queue>

class Solution {
public:
    int lastStoneWeight(std::vector<int>& stones) {
        std::priority_queue<int> pq {stones.begin(), stones.end()};

        while(pq.size() > 1){
            int first = pq.top();
            pq.pop();

            int second = pq.top();
            pq.pop();

            if(first != second){
                pq.push(first - second);
            }
        }

        return (pq.size() == 1) ? pq.top() : 0;
    }
};