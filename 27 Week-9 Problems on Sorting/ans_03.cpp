#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int kthSmallest(vector<int>& arr, int k) {
    sort(arr.begin(), arr.end());
    return arr[k-1];
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    cout << kthSmallest(arr, k) << endl;
    return 0;
}
