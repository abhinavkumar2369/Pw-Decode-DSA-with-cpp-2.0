#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> A(n, vector<int>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    int sum = 0;
    for(int i = min(l1, l2); i <= max(l1, l2); i++)
        for(int j = min(r1, r2); j <= max(r1, r2); j++)
            sum += A[i][j];
    cout << sum << endl;
    return 0;
}
