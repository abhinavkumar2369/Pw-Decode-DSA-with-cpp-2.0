#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

int minimumDeviation(vector<int>& nums) {
    priority_queue<int> maxHeap;
    int minVal = INT_MAX;

    for (int num : nums) {
        if (num % 2 != 0) num *= 2;
        maxHeap.push(num);
        minVal = min(minVal, num);
    }

    int minDeviation = INT_MAX;
    while (!maxHeap.empty()) {
        int maxVal = maxHeap.top();
        maxHeap.pop();
        minDeviation = min(minDeviation, maxVal - minVal);
        if (maxVal % 2 == 0) {
            maxVal /= 2;
            maxHeap.push(maxVal);
            minVal = min(minVal, maxVal);
        } else {
            break;
        }
    }

    return minDeviation;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    cout << minimumDeviation(nums) << endl; // output: 1
    return 0;
}
