#include <iostream>
#include <vector>
#include <cmath>
#include <queue>
using namespace std;


bool canDetonate(vector<int>& bomb1, vector<int>& bomb2) {
    long long dx = bomb1[0] - bomb2[0];
    long long dy = bomb1[1] - bomb2[1];
    long long distanceSquared = dx * dx + dy * dy;
    return distanceSquared <= (long long)bomb1[2] * bomb1[2];
}


int bfs(int start, vector<vector<int>>& graph) {
    vector<bool> visited(graph.size(), false);
    queue<int> q;
    q.push(start);
    visited[start] = true;
    int count = 1;

    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        for (int neighbor : graph[curr]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
                count++;
            }
        }
    }
    return count;
}

int maximumDetonation(vector<vector<int>>& bombs) {
    int n = bombs.size();
    vector<vector<int>> graph(n);


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && canDetonate(bombs[i], bombs[j])) {
                graph[i].push_back(j);
            }
        }
    }


    int maxDetonations = 0;
    for (int i = 0; i < n; i++) {
        maxDetonations = max(maxDetonations, bfs(i, graph));
    }
    return maxDetonations;
}

int main() {
    vector<vector<int>> bombs = {{2, 1, 3}, {6, 1, 4}};
    cout << maximumDetonation(bombs) << endl;
    return 0;
}
