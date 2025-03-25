#include <iostream>
#include <vector>
using namespace std;

int numberOfArithmeticSlices(vector<int>& nums) {
    int n = nums.size(), res = 0, curr = 0;
    for(int i = 2; i < n; ++i) {
        if(nums[i] - nums[i-1] == nums[i-1] - nums[i-2]) {
            curr++;
            res += curr;
        } else {
            curr = 0;
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; ++i) cin >> nums[i];
    cout << numberOfArithmeticSlices(nums) << endl;
    return 0;
}
