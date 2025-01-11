#include <iostream>
#include <vector>
using namespace std;
int findDuplicate(const vector<int>& arr) {
    int l = 0, r = arr.size() - 1;
    while (l < r) {
        int m = l + (r - l) / 2;
        if (arr[m] > m + 1) r = m;
        else l = m + 1;
    }
    return arr[l];
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];
    cout << findDuplicate(arr) << endl;
    return 0;
}
