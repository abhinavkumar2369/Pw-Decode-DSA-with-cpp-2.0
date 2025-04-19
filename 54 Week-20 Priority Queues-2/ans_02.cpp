#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
    auto compare = [&](pair<int, int> a, pair<int, int> b) {
        return arr[a.first] * arr[b.second] > arr[b.first] * arr[a.second];
    };
    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(compare)> minHeap(compare);

    for (int i = 0; i < arr.size() - 1; ++i) {
        minHeap.push({i, arr.size() - 1});
    }

    while (--k > 0) {
        auto [i, j] = minHeap.top();
        minHeap.pop();
        if (j - 1 > i) {
            minHeap.push({i, j - 1});
        }
    }

    return {arr[minHeap.top().first], arr[minHeap.top().second]};
}

int main() {
    vector<int> arr = {1, 2, 3, 5};
    int k = 3;
    vector<int> result = kthSmallestPrimeFraction(arr, k);
    cout << result[0] << "/" << result[1] << endl; // Output: 2/5
    return 0;
}
