#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int maxDistance(vector<vector<int>>& grid) {
    int n = grid.size();
    queue<pair<int, int>> q;
    vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 1) {
                q.push({i, j});
            }
        }
    }

    if (q.empty() || q.size() == n * n) return -1;

    int distance = -1;
    while (!q.empty()) {
        int size = q.size();
        distance++;
        for (int i = 0; i < size; ++i) {
            auto [x, y] = q.front();
            q.pop();
            for (const auto& dir : directions) {
                int nx = x + dir[0], ny = y + dir[1];
                if (nx >= 0 && ny >= 0 && nx < n && ny < n && grid[nx][ny] == 0) {
                    grid[nx][ny] = 1;
                    q.push({nx, ny});
                }
            }
        }
    }

    return distance;
}

int main() {
    vector<vector<int>> grid = {
        {0, 1, 0},
        {0, 0, 0},
        {1, 0, 0}
    };
    cout << maxDistance(grid) << endl;
    return 0;
}
