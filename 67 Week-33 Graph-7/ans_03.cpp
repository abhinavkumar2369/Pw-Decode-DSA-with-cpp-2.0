#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include<limits.h>
using namespace std;

int minimumEffortPath(vector<vector<int>>& heights) {
    int rows = heights.size(), cols = heights[0].size();
    vector<vector<int>> effort(rows, vector<int>(cols, INT_MAX));
    effort[0][0] = 0;

    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> pq;
    pq.emplace(0, make_pair(0, 0));

    vector<int> directions = {-1, 0, 1, 0, -1};

    while (!pq.empty()) {
        auto [currEffort, cell] = pq.top();
        pq.pop();

        int x = cell.first, y = cell.second;
        if (x == rows - 1 && y == cols - 1) return currEffort;

        for (int i = 0; i < 4; ++i) {
            int nx = x + directions[i], ny = y + directions[i + 1];
            if (nx >= 0 && ny >= 0 && nx < rows && ny < cols) {
                int newEffort = max(currEffort, abs(heights[x][y] - heights[nx][ny]));
                if (newEffort < effort[nx][ny]) {
                    effort[nx][ny] = newEffort;
                    pq.emplace(newEffort, make_pair(nx, ny));
                }
            }
        }
    }
    return 0;
}

int main() {
    vector<vector<int>> heights = {{1, 2, 2}, {3, 8, 2}, {5, 3, 5}};
    cout << "Minimum Effort Path: " << minimumEffortPath(heights) << endl;
    return 0;
}
