#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int i, int j, bool& isSubIsland) {
    if (i < 0 || j < 0 || i >= grid2.size() || j >= grid2[0].size() || grid2[i][j] == 0) return;

    if (grid1[i][j] == 0) isSubIsland = false;

    grid2[i][j] = 0;
    dfs(grid1, grid2, i + 1, j, isSubIsland);
    dfs(grid1, grid2, i - 1, j, isSubIsland);
    dfs(grid1, grid2, i, j + 1, isSubIsland);
    dfs(grid1, grid2, i, j - 1, isSubIsland);
}

int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
    int count = 0;
    for (int i = 0; i < grid2.size(); i++) {
        for (int j = 0; j < grid2[0].size(); j++) {
            if (grid2[i][j] == 1) {
                bool isSubIsland = true;
                dfs(grid1, grid2, i, j, isSubIsland);
                if (isSubIsland) count++;
            }
        }
    }
    return count;
}

int main() {
    vector<vector<int>> grid1 = {{1, 1, 1, 0}, {0, 1, 0, 0}, {1, 1, 0, 1}};
    vector<vector<int>> grid2 = {{1, 1, 1, 0}, {0, 0, 0, 0}, {1, 1, 0, 1}};
    cout << countSubIslands(grid1, grid2) << endl;
    return 0;
}
