#include <iostream>
#include <vector>
using namespace std;
int firstOne(const vector<int>& row) {
    int l = 0, r = row.size() - 1, pos = row.size();
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (row[m] == 1) {
            pos = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    return pos;
}
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> mat[i][j];
    int maxRow = -1, maxOnes = -1;
    for (int i = 0; i < n; ++i) {
        int ones = m - firstOne(mat[i]);
        if (ones > maxOnes) {
            maxOnes = ones;
            maxRow = i;
        }
    }
    cout << maxRow << endl;
    return 0;
}
