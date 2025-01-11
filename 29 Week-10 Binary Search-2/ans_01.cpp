#include <iostream>
#include <vector>
using namespace std;

int binarySearchDecreasing(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) right = mid - 1;
        else left = mid + 1;
    }
    return -1;
}

int main() {
    int n, target;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];
    cin >> target;
    int idx = binarySearchDecreasing(arr, target);
    cout << idx << endl;
    return 0;
}
