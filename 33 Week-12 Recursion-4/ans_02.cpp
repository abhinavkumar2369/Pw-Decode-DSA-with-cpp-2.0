#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void generateUniqueSubsets(vector<int>& nums, vector<vector<int>>& result, 
                          vector<int>& currentSubset, int startIndex) {
    result.push_back(currentSubset);
    for (int i = startIndex; i < nums.size(); i++) {
        if (i > startIndex && nums[i] == nums[i-1]) {
            continue;
        }
        currentSubset.push_back(nums[i]);
        generateUniqueSubsets(nums, result, currentSubset, i + 1);
        currentSubset.pop_back();
    }
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
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> powerSet;
    vector<int> currentSubset;
    
    cout << "Array with duplicates: {";
    for (size_t i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i < nums.size() - 1) cout << ", ";
    }
    cout << "}" << endl;
    
    sort(nums.begin(), nums.end());
    generateUniqueSubsets(nums, powerSet, currentSubset, 0);
    cout << "Number of unique subsets: " << powerSet.size() << endl;
    printPowerSet(powerSet);
    
    nums = {1, 1, 2, 3};
    powerSet.clear();
    currentSubset.clear();
    
    cout << "\nAnother example - Array: {1, 1, 2, 3}" << endl;
    sort(nums.begin(), nums.end());
    generateUniqueSubsets(nums, powerSet, currentSubset, 0);
    cout << "Number of unique subsets: " << powerSet.size() << endl;
    printPowerSet(powerSet);
    
    return 0;
}
