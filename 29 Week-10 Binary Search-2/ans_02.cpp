#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr, int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int searchInfiniteSortedArray(const vector<int>& arr, int target) {
    int left = 0, right = 1;
    while (right < arr.size() && arr[right] < target) {
        left = right;
        right = right * 2;
        if (right >= arr.size()) right = arr.size() - 1;
    }
    return binarySearch(arr, left, right, target);
}

int main() {
    int n, target;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];
    cin >> target;
    int idx = searchInfiniteSortedArray(arr, target);
    cout << idx << endl;
    return 0;
}
