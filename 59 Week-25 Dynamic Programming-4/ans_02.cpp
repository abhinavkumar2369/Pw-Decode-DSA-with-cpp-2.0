#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> largestDivisibleSubset(vector<int>& nums) {
    int n = nums.size();
    if(n == 0) return {};
    sort(nums.begin(), nums.end());
    vector<int> dp(n, 1), prev(n, -1);
    int maxLen = 1, last = 0;
    for(int i = 1; i < n; ++i) {
        for(int j = 0; j < i; ++j) {
            if(nums[i] % nums[j] == 0 && dp[j] + 1 > dp[i]) {
                dp[i] = dp[j] + 1;
                prev[i] = j;
            }
        }
        if(dp[i] > maxLen) {
            maxLen = dp[i];
            last = i;
        }
    }
    vector<int> res;
    while(last != -1) {
        res.push_back(nums[last]);
        last = prev[last];
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; ++i) cin >> nums[i];
    vector<int> ans = largestDivisibleSubset(nums);
    for(int x : ans) cout << x << " ";
    cout << endl;
    return 0;
}
