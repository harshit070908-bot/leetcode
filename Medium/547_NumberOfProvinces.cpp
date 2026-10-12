#include <vector>
#include <queue>

class Solution {
public:
    int findCircleNum(std::vector<std::vector<int>>& isConnected) {
        int n = isConnected.size();
        int provinces = 0;
        std::vector<bool> visited(n, false);
        std::queue<int> q;

        for (int i = 0; i < n; i++){
            if (visited[i]) continue;

            provinces++;
            q.push(i);
            visited[i] = true;

            while (!q.empty()) {
                int current = q.front();
                q.pop();

                for (int j = 0; j < n; j++) {
                    if (isConnected[current][j] && !visited[j]) {
                        visited[j] = true;
                        q.push(j);
                    }
                }
            }
        }

        return provinces;
    }
};