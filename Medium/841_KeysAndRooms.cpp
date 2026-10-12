#include <vector>
#include <queue>

class Solution {
public:
    bool canVisitAllRooms(std::vector<std::vector<int>>& rooms) {
        int result {};

        size_t n {rooms.size()};
        std::vector<bool> visited(n, 0);
        std::queue<int> q;

        q.push(0);
        visited[0] = 1;
        result++;

        while(!q.empty()){
            int current = q.front();
            q.pop();

            for(auto j : rooms[current]){
                if(!visited[j]){
                    q.push(j);
                    visited[j] = 1;
                    result++;
                }
            }
        }

        return result == n;
    }
};