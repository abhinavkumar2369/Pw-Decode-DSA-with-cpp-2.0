#include <vector>
using namespace std;

void dfs(int node, int target, vector<vector<int>>& graph, vector<int>& path, vector<vector<int>>& result) {
    path.push_back(node);
    if (node == target) {
        result.push_back(path);
    } else {
        for (int neighbor : graph[node]) {
            dfs(neighbor, target, graph, path, result);
        }
    }
    path.pop_back();
}

vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
    vector<vector<int>> result;
    vector<int> path;
    dfs(0, graph.size() - 1, graph, path, result);
    return result;
}
