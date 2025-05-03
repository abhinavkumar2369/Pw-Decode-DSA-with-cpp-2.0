#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

class UnionFind {
    vector<int> parent, rank;
public:
    UnionFind(int n) : parent(n), rank(n, 0) {
        iota(parent.begin(), parent.end(), 0);
    }

    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    bool unite(int x, int y) {
        int rootX = find(x), rootY = find(y);
        if (rootX == rootY) return false;
        if (rank[rootX] > rank[rootY]) {
            parent[rootY] = rootX;
        } else if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
        } else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }
        return true;
    }
};

int makeConnected(int n, vector<vector<int>>& connections) {
    if (connections.size() < n - 1) return -1;
    UnionFind uf(n);
    int components = n;
    for (const auto& conn : connections) {
        if (uf.unite(conn[0], conn[1])) {
            components--;
        }
    }
    return components - 1;
}

int main() {
    int n = 6;
    vector<vector<int>> connections = {{0, 1}, {0, 2}, {0, 3}, {1, 4}};
    cout << makeConnected(n, connections) << endl;
    return 0;
}
