#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int minOperationsToSort(vector<int>& arr) {
    vector<int> sorted = arr;
    sort(sorted.begin(), sorted.end());
    set<int> ops;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] != sorted[i]) ops.insert(arr[i]);
    }
    return ops.size();
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    cout << minOperationsToSort(arr) << endl;
    return 0;
}
