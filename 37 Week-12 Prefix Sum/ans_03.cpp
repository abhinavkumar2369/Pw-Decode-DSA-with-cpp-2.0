#include <vector>
using namespace std;

vector<long long> findPrefixScore(vector<int>& nums) {
    int n = nums.size();
    vector<long long> ans(n);
    long long sum = 0, mx = 0;
    for (int i = 0; i < n; ++i) {
        mx = max(mx, (long long)nums[i]);
        sum += nums[i] + mx;
        ans[i] = sum;
    }
    return ans;
}
