#include <vector>
#include <queue>
#include<math.h>
using namespace std;

int maxGroups(int n, vector<vector<int>>& edges) {
    vector<vector<int>> graph(n + 1);
    vector<int> group(n + 1, -1);

    for (auto& edge : edges) {
        graph[edge[0]].push_back(edge[1]);
        graph[edge[1]].push_back(edge[0]);
    }

    auto bfs = [&](int start) {
        queue<int> q;
        q.push(start);
        group[start] = 0;

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            for (int neighbor : graph[node]) {
                if (group[neighbor] == -1) {
                    group[neighbor] = group[node] + 1;
                    q.push(neighbor);
                } else if (abs(group[neighbor] - group[node]) != 1) {
                    return false;
                }
            }
        }
        return true;
    };

    for (int i = 1; i <= n; ++i) {
        if (group[i] == -1 && !bfs(i)) {
            return -1;
        }
    }

    int maxGroup = 0;
    for (int g : group) {
        maxGroup = max(maxGroup, g);
    }
    return maxGroup + 1;
}
