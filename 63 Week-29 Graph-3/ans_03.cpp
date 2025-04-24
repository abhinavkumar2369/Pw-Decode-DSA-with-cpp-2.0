#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<int>>& land, int i, int j, int& r2, int& c2) {
    if (i < 0 || j < 0 || i >= land.size() || j >= land[0].size() || land[i][j] == 0) return;

    land[i][j] = 0;
    r2 = max(r2, i);
    c2 = max(c2, j);

    dfs(land, i + 1, j, r2, c2);
    dfs(land, i, j + 1, r2, c2);
}

vector<vector<int>> findFarmland(vector<vector<int>>& land) {
    vector<vector<int>> result;
    for (int i = 0; i < land.size(); i++) {
        for (int j = 0; j < land[0].size(); j++) {
            if (land[i][j] == 1) {
                int r1 = i, c1 = j, r2 = i, c2 = j;
                dfs(land, i, j, r2, c2);
                result.push_back({r1, c1, r2, c2});
            }
        }
    }
    return result;
}

int main() {
    vector<vector<int>> land = {{1, 0, 0}, {0, 1, 1}, {0, 1, 1}};
    vector<vector<int>> result = findFarmland(land);
    for (auto& rect : result) {
        cout << "[" << rect[0] << ", " << rect[1] << ", " << rect[2] << ", " << rect[3] << "]\n";
    }
    return 0;
}
