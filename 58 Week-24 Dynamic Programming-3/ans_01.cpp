#include <iostream>
#include <vector>
using namespace std;

int findLength(vector<int>& A, vector<int>& B) {
    int n = A.size(), m = B.size(), res = 0;
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    for(int i = n-1; i >= 0; --i) {
        for(int j = m-1; j >= 0; --j) {
            if(A[i] == B[j]) {
                dp[i][j] = 1 + dp[i+1][j+1];
                res = max(res, dp[i][j]);
            }
        }
    }
    return res;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> A(n), B(m);
    for(int i = 0; i < n; ++i) cin >> A[i];
    for(int i = 0; i < m; ++i) cin >> B[i];
    cout << findLength(A, B) << endl;
    return 0;
}
