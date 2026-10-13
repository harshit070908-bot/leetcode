#include <vector>
#include <utility>

class Solution {
public:
    int minReorder(int n, std::vector<std::vector<int>>& connections) {
        std::vector<std::vector<std::pair<int, int>>> graph(n);

        for (auto& edge : connections) {
            int a = edge[0];
            int b = edge[1];

            graph[a].push_back({b, 1});
            graph[b].push_back({a, 0});
        }

        std::vector<bool> visited(n, false);
        return dfs(0, graph, visited);
    }

    int dfs(int city, std::vector<std::vector<std::pair<int, int>>>& graph, std::vector<bool>& visited) {
        visited[city] = true;
        int changes = 0;

        for (auto [next, cost] : graph[city]) {
            if (!visited[next]) {
                changes += cost;
                changes += dfs(next, graph, visited);
            }
        }

        return changes;
    }
};
