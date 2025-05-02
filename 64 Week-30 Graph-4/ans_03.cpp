#include <vector>
#include <queue>
#include <climits>
using namespace std;

int shortestCycle(int n, vector<vector<int>>& edges) {
    vector<vector<int>> graph(n);
    for (auto& edge : edges) {
        graph[edge[0]].push_back(edge[1]);
        graph[edge[1]].push_back(edge[0]);
    }

    int shortest = INT_MAX;

    for (int i = 0; i < n; ++i) {
        vector<int> dist(n, -1);
        vector<int> parent(n, -1);
        queue<int> q;

        q.push(i);
        dist[i] = 0;

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            for (int neighbor : graph[node]) {
                if (dist[neighbor] == -1) {
                    dist[neighbor] = dist[node] + 1;
                    parent[neighbor] = node;
                    q.push(neighbor);
                } else if (parent[node] != neighbor) {
                    shortest = min(shortest, dist[node] + dist[neighbor] + 1);
                }
            }
        }
    }

    return shortest == INT_MAX ? -1 : shortest;
}
