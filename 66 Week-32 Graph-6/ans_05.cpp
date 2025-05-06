#include <vector>
#include <queue>
#include <climits>
#include <algorithm>
using namespace std;

int networkDelayTime(vector<vector<int>>& times, int n, int k) {
    vector<vector<pair<int, int>>> graph(n + 1);
    for (auto& time : times) {
        graph[time[0]].emplace_back(time[1], time[2]);
    }

    vector<int> dist(n + 1, INT_MAX);
    dist[k] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.emplace(0, k);

    while (!pq.empty()) {
        auto [time, node] = pq.top();
        pq.pop();

        if (time > dist[node]) continue;

        for (auto& [neighbor, weight] : graph[node]) {
            int newDist = time + weight;
            if (newDist < dist[neighbor]) {
                dist[neighbor] = newDist;
                pq.emplace(newDist, neighbor);
            }
        }
    }

    int maxTime = *max_element(dist.begin() + 1, dist.end());
    return maxTime == INT_MAX ? -1 : maxTime;
}