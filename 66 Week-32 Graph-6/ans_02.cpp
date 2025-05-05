#include <vector>
#include <algorithm>
using namespace std;

vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
    int n = graph.size();
    vector<int> outdegree(n, 0), result;
    vector<vector<int>> reverseGraph(n);

    for (int i = 0; i < n; ++i) {
        for (int neighbor : graph[i]) {
            reverseGraph[neighbor].push_back(i);
            outdegree[i]++;
        }
    }

    vector<int> queue;
    for (int i = 0; i < n; ++i) {
        if (outdegree[i] == 0) queue.push_back(i);
    }

    while (!queue.empty()) {
        int node = queue.back();
        queue.pop_back();
        result.push_back(node);
        for (int neighbor : reverseGraph[node]) {
            if (--outdegree[neighbor] == 0) {
                queue.push_back(neighbor);
            }
        }
    }

    sort(result.begin(), result.end());
    return result;
}