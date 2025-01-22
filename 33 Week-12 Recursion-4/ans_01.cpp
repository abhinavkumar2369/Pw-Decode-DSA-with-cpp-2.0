#include <iostream>
#include <vector>
using namespace std;

void generateSubsets(vector<int>& nums, vector<vector<int>>& result, 
                    vector<int>& currentSubset, int index) {
    if (index == nums.size()) {
        result.push_back(currentSubset);
        return;
    }
    currentSubset.push_back(nums[index]);
    generateSubsets(nums, result, currentSubset, index + 1);
    currentSubset.pop_back();
    generateSubsets(nums, result, currentSubset, index + 1);
}

void printPowerSet(const vector<vector<int>>& powerSet) {
    cout << "Power Set: {" << endl;
    for (const auto& subset : powerSet) {
        cout << "  {";
        for (size_t i = 0; i < subset.size(); i++) {
            cout << subset[i];
            if (i < subset.size() - 1) cout << ", ";
        }
        cout << "}" << endl;
    }
    cout << "}" << endl;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> powerSet;
    vector<int> currentSubset;
    cout << "Array: {";
    for (size_t i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i < nums.size() - 1) cout << ", ";
    }
    cout << "}" << endl;
    generateSubsets(nums, powerSet, currentSubset, 0);
    cout << "Number of subsets: " << powerSet.size() << endl;
    printPowerSet(powerSet);
    return 0;
}
