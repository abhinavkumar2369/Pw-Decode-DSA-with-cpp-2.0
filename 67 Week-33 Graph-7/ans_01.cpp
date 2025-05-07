#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
    vector<vector<pair<int, double>>> graph(n);
    for (int i = 0; i < edges.size(); ++i) {
        graph[edges[i][0]].emplace_back(edges[i][1], succProb[i]);
        graph[edges[i][1]].emplace_back(edges[i][0], succProb[i]);
    }

    vector<double> prob(n, 0.0);
    prob[start] = 1.0;
    priority_queue<pair<double, int>> pq;
    pq.emplace(1.0, start);

    while (!pq.empty()) {
        auto [currProb, node] = pq.top();
        pq.pop();

        if (node == end) return currProb;

        for (auto& [neighbor, edgeProb] : graph[node]) {
            double newProb = currProb * edgeProb;
            if (newProb > prob[neighbor]) {
                prob[neighbor] = newProb;
                pq.emplace(newProb, neighbor);
            }
        }
    }
    return 0.0;
}

int main() {
    int n = 3;
    vector<vector<int>> edges = {{0, 1}, {1, 2}, {0, 2}};
    vector<double> succProb = {0.5, 0.5, 0.2};
    int start = 0, end = 2;

    cout << "Maximum Probability: " << maxProbability(n, edges, succProb, start, end) << endl;
    return 0;
}
