#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int maxOperations(vector<int>& nums, int k) {
    unordered_map<int, int> mp;
    int ans = 0;
    for(int x : nums) {
        if(mp[k - x] > 0) {
            ans++;
            mp[k - x]--;
        } else {
            mp[x]++;
        }
    }
    return ans;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for(int i = 0; i < n; ++i) cin >> nums[i];
    cout << maxOperations(nums, k) << endl;
    return 0;
}
