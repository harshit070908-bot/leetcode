#include <vector>
#include <queue>
#include <unordered_set>
#include <unordered_map>

class Solution {
public:
    bool validPath(int n, std::vector<std::vector<int>>& edges, int source, int destination) {
        std::vector<std::vector<int>> graph(n);
        
        for(auto i : edges){
            graph[i[0]].push_back(i[1]);
            graph[i[1]].push_back(i[0]);
        }

        std::unordered_set<int> visited;

        std::queue<int> q;
        q.push(source);

        while(!q.empty()){
            int node = q.front();
            q.pop();

            if(node == destination) return 1;

            for(auto i : graph[node]){
                if(visited.insert(i).second){
                    q.push(i);
                }
            }
        }

        return 0;
    }
};