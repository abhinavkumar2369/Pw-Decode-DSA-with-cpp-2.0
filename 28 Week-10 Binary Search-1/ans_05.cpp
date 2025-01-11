#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long l = 0, r = n;
    bool found = false;
    while (l <= r) {
        long long m = l + (r - l) / 2;
        long long sq = m * m;
        if (sq == n) {
            found = true;
            break;
        } else if (sq < n) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    cout << (found ? "yes" : "no") << endl;
    return 0;
}
