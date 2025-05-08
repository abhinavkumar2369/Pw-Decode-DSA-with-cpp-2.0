#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <tuple>
using namespace std;

class UnionFind {
    vector<int> parent, rank;
public:
    UnionFind(int n) : parent(n), rank(n, 0) {
        for (int i = 0; i < n; ++i) parent[i] = i;
    }
    int find(int x) {
        if (parent[x] != x) parent[x] = find(parent[x]);
        return parent[x];
    }
    bool unite(int x, int y) {
        int rootX = find(x), rootY = find(y);
        if (rootX == rootY) return false;
        if (rank[rootX] > rank[rootY]) parent[rootY] = rootX;
        else if (rank[rootX] < rank[rootY]) parent[rootX] = rootY;
        else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }
        return true;
    }
};

int minCostConnectPoints(vector<vector<int>>& points) {
    int n = points.size();
    vector<tuple<int, int, int>> edges;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int cost = abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1]);
            edges.emplace_back(cost, i, j);
        }
    }
    sort(edges.begin(), edges.end());
    UnionFind uf(n);
    int totalCost = 0, edgesUsed = 0;
    for (const auto& edge : edges) {
        int cost = get<0>(edge), u = get<1>(edge), v = get<2>(edge);
        if (uf.unite(u, v)) {
            totalCost += cost;
            if (++edgesUsed == n - 1) break;
        }
    }
    return totalCost;
}

int main() {
    vector<vector<int>> points = {{0, 0}, {2, 2}, {3, 10}, {5, 2}, {7, 0}};
    cout << "Min Cost to Connect All Points: " << minCostConnectPoints(points) << endl;
    return 0;
}