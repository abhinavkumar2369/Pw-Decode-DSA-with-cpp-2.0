// Leetcode 645: Set Mismatch
#include <vector>
#include<math.h>
using namespace std;

vector<int> findErrorNums(vector<int>& nums) {
    int i = 0;
    while (i < nums.size()) {
        int correct = nums[i] - 1;
        if (nums[i] != nums[correct]) {
            swap(nums[i], nums[correct]);
        } else {
            i++;
        }
    }
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != i + 1) {
            return {nums[i], i + 1};
        }
    }
    return {};
}

// Leetcode 442: Find All Duplicates in an Array
vector<int> findDuplicates(vector<int>& nums) {
    vector<int> res;
    for (int i = 0; i < nums.size(); i++) {
        int idx = abs(nums[i]) - 1;
        if (nums[idx] < 0) {
            res.push_back(abs(nums[i]));
        } else {
            nums[idx] = -nums[idx];
        }
    }
    return res;
}
