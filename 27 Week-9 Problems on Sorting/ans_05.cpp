#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSorted(const vector<int>& v) {
    for (int i = 1; i < v.size(); ++i)
        if (v[i-1] > v[i]) return false;
    return true;
}

int findK(vector<int>& arr) {
    int n = arr.size();
    vector<int> candidates;
    for (int i = 0; i < n; ++i)
        for (int j = i+1; j < n; ++j)
            candidates.push_back((arr[i] + arr[j]) / 2);
    candidates.push_back(arr[0]);
    for (int K : candidates) {
        vector<int> temp(n);
        for (int i = 0; i < n; ++i)
            temp[i] = abs(arr[i] - K);
        if (isSorted(temp)) return K;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    cout << findK(arr) << endl;
    return 0;
}
