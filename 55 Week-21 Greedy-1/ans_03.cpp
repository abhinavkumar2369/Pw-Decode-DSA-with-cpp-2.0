#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minOperations(vector<int>& nums) {
    int operations = 0;
    while (true) {
        int minPositive = *min_element(nums.begin(), nums.end(), [](int a, int b) {
            return (a > 0 && (b <= 0 || a < b));
        });
        if (minPositive <= 0) break;
        for (int& num : nums) {
            if (num > 0) num -= minPositive;
        }
        operations++;
    }
    return operations;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];
    cout << minOperations(nums) << endl;
    return 0;
}
