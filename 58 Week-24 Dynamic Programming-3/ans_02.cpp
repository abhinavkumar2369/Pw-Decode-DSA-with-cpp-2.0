#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

bool canPartitionKSubsets(vector<int>& nums, int k) {
    int n = nums.size();
    int sum = accumulate(nums.begin(), nums.end(), 0);
    if(sum % k != 0) return false;
    int target = sum / k;
    sort(nums.rbegin(), nums.rend());
    vector<int> buckets(k, 0);
    function<bool(int)> dfs = [&](int idx) {
        if(idx == n) return true;
        for(int i = 0; i < k; ++i) {
            if(buckets[i] + nums[idx] > target) continue;
            buckets[i] += nums[idx];
            if(dfs(idx + 1)) return true;
            buckets[i] -= nums[idx];
            if(buckets[i] == 0) break;
        }
        return false;
    };
    return dfs(0);
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for(int i = 0; i < n; ++i) cin >> nums[i];
    cout << (canPartitionKSubsets(nums, k) ? "true" : "false") << endl;
    return 0;
}
