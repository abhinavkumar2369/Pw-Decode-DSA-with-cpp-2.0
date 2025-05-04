#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class UnionFind {
    unordered_map<int, int> parent;
    int count = 0;
public:
    int find(int x) {
        if (!parent.count(x)) {
            parent[x] = x;
            count++;
        }
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    void unite(int x, int y) {
        int rootX = find(x), rootY = find(y);
        if (rootX != rootY) {
            parent[rootX] = rootY;
            count--;
        }
    }

    int getCount() const {
        return count;
    }
};

int removeStones(vector<vector<int>>& stones) {
    UnionFind uf;
    for (const auto& stone : stones) {
        uf.unite(stone[0], ~stone[1]);
    }
    return stones.size() - uf.getCount();
}

int main() {
    vector<vector<int>> stones = {{0, 0}, {0, 1}, {1, 0}, {1, 2}, {2, 1}, {2, 2}};
    cout << removeStones(stones) << endl;
    return 0;
}
