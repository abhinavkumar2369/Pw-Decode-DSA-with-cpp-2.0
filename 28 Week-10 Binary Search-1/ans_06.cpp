#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long l = 0, r = n, ans = 0;
    while (l <= r) {
        long long m = l + (r - l) / 2;
        long long coins = m * (m + 1) / 2;
        if (coins <= n) {
            ans = m;
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    cout << ans << endl;
    return 0;
}
