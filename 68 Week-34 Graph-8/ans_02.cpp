#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include<limits.h>
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

int kruskal(int n, vector<vector<int>>& edges, int blockEdge = -1, int includeEdge = -1) {
    UnionFind uf(n);
    int totalCost = 0, edgesUsed = 0;

    if (includeEdge != -1) {
        totalCost += edges[includeEdge][2];
        uf.unite(edges[includeEdge][0], edges[includeEdge][1]);
        edgesUsed++;
    }

    for (int i = 0; i < edges.size(); ++i) {
        if (i == blockEdge) continue;
        if (uf.unite(edges[i][0], edges[i][1])) {
            totalCost += edges[i][2];
            edgesUsed++;
            if (edgesUsed == n - 1) break;
        }
    }
    return edgesUsed == n - 1 ? totalCost : INT_MAX;
}

vector<vector<int>> findCriticalAndPseudoCriticalEdges(int n, vector<vector<int>>& edges) {
    for (int i = 0; i < edges.size(); ++i) edges[i].push_back(i);
    sort(edges.begin(), edges.end(), [](const auto& a, const auto& b) {
        return a[2] < b[2];
    });

    int mstCost = kruskal(n, edges);
    vector<int> critical, pseudoCritical;

    for (int i = 0; i < edges.size(); ++i) {
        if (kruskal(n, edges, i) > mstCost) critical.push_back(edges[i][3]);
        else if (kruskal(n, edges, -1, i) == mstCost) pseudoCritical.push_back(edges[i][3]);
    }

    return {critical, pseudoCritical};
}

int main() {
    int n = 5;
    vector<vector<int>> edges = {{0, 1, 1}, {0, 2, 1}, {1, 2, 1}, {1, 3, 2}, {2, 4, 2}, {3, 4, 3}};
    vector<vector<int>> result = findCriticalAndPseudoCriticalEdges(n, edges);

    cout << "Critical Edges: ";
    for (int edge : result[0]) cout << edge << " ";
    cout << "\nPseudo-Critical Edges: ";
    for (int edge : result[1]) cout << edge << " ";
    cout << endl;

    return 0;
}