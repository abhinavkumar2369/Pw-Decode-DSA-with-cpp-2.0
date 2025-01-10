#include <iostream>
#include <vector>
using namespace std;
int countOnes(const vector<int>& a) {
    int l = 0, r = a.size() - 1, first = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (a[m] == 1) {
            first = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    if (first == -1) return 0;
    return a.size() - first;
}
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    cout << countOnes(a) << endl;
    return 0;
}
