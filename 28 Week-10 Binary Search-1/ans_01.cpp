#include <iostream>
#include <vector>
using namespace std;
int lastOccurrence(const vector<int>& arr, int x) {
    int l = 0, r = arr.size() - 1, ans = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x) {
            ans = m;
            l = m + 1;
        } else if (arr[m] < x) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return ans;
}
int main() {
    int n, x;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];
    cin >> x;
    cout << lastOccurrence(arr, x) << endl;
    return 0;
}
