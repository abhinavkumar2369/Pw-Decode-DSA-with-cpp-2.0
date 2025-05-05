#include <vector>
#include <queue>
#include <climits>
using namespace std;

int countPaths(int n, vector<vector<int>>& roads) {
    const int MOD = 1e9 + 7;
    vector<vector<pair<int, int>>> graph(n);
    for (auto& road : roads) {
        graph[road[0]].emplace_back(road[1], road[2]);
        graph[road[1]].emplace_back(road[0], road[2]);
    }

    vector<long long> dist(n, LLONG_MAX), ways(n, 0);
    dist[0] = 0;
    ways[0] = 1;

    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> pq;
    pq.emplace(0, 0);

    while (!pq.empty()) {
        auto [time, node] = pq.top();
        pq.pop();

        if (time > dist[node]) continue;

        for (auto& [neighbor, weight] : graph[node]) {
            long long newDist = time + weight;
            if (newDist < dist[neighbor]) {
                dist[neighbor] = newDist;
                ways[neighbor] = ways[node];
                pq.emplace(newDist, neighbor);
            } else if (newDist == dist[neighbor]) {
                ways[neighbor] = (ways[neighbor] + ways[node]) % MOD;
            }
        }
    }

    return ways[n - 1];
}