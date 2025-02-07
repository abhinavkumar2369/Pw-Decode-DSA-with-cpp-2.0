#include <vector>
using namespace std;

vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
    vector<int> ans(n + 2, 0);
    for (auto& b : bookings) {
        ans[b[0]] += b[2];
        ans[b[1] + 1] -= b[2];
    }
    for (int i = 1; i <= n; ++i) {
        ans[i] += ans[i - 1];
    }
    ans.resize(n + 1);
    return vector<int>(ans.begin() + 1, ans.end());
}
