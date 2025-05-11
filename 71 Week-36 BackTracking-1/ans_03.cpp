#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void generateSubsets(vector<int> &nums, int index, vector<int> &current, vector<vector<int>> &result) {
    result.push_back(current);
    for (int i = index; i < nums.size(); ++i) {
        if (i > index && nums[i] == nums[i - 1]) continue; // Skip duplicates
        current.push_back(nums[i]);
        generateSubsets(nums, i + 1, current, result);
        current.pop_back();
    }
}

vector<vector<int>> subsetsWithDup(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    vector<int> current;
    generateSubsets(nums, 0, current, result);
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];

    vector<vector<int>> result = subsetsWithDup(nums);
    for (const auto &subset : result) {
        cout << "[";
        for (int num : subset) cout << num << " ";
        cout << "]" << endl;
    }
    return 0;
}
