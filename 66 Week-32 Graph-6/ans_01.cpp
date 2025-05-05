#include <vector>
#include <algorithm>
#include <unordered_map>
#include <functional>
using namespace std;

vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
    int n = quiet.size();
    vector<vector<int>> graph(n);
    vector<int> answer(n, -1);

    for (auto& r : richer) {
        graph[r[1]].push_back(r[0]);
    }

    function<int(int)> dfs = [&](int node) {
        if (answer[node] != -1) return answer[node];
        answer[node] = node;
        for (int neighbor : graph[node]) {
            int candidate = dfs(neighbor);
            if (quiet[candidate] < quiet[answer[node]]) {
                answer[node] = candidate;
            }
        }
        return answer[node];
    };

    for (int i = 0; i < n; ++i) {
        dfs(i);
    }

    return answer;
}