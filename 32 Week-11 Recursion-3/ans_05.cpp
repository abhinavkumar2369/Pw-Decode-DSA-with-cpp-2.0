#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> currentSubset;
        
        // Sort the array to group duplicates together
        sort(nums.begin(), nums.end());
        
        // Start recursive backtracking from index 0
        backtrack(nums, 0, currentSubset, result);
        
        return result;
    }
    
private:
    void backtrack(const vector<int>& nums, int start, vector<int>& currentSubset, vector<vector<int>>& result) {
        // Add current subset to result
        result.push_back(currentSubset);
        
        for (int i = start; i < nums.size(); i++) {
            // Skip duplicates
            if (i > start && nums[i] == nums[i-1]) {
                continue;
            }
            
            // Include the current element in subset
            currentSubset.push_back(nums[i]);
            
            // Recurse for next elements
            backtrack(nums, i + 1, currentSubset, result);
            
            // Backtrack (remove the element to try other possibilities)
            currentSubset.pop_back();
        }
    }
};

// Utility function to print a 2D vector
void printResult(const vector<vector<int>>& subsets) {
    cout << "[";
    for (size_t i = 0; i < subsets.size(); i++) {
        cout << "[";
        for (size_t j = 0; j < subsets[i].size(); j++) {
            cout << subsets[i][j];
            if (j < subsets[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i < subsets.size() - 1) cout << ",";
    }
    cout << "]" << endl;
}

int main() {
    Solution solution;
    
    // Example 1: nums = [1,2,2]
    vector<int> nums = {1, 2, 2};
    cout << "Input: nums = [1,2,2]" << endl;
    cout << "Output: ";
    vector<vector<int>> result = solution.subsetsWithDup(nums);
    printResult(result);
    
    // Additional test case
    vector<int> nums2 = {1, 2, 3};
    cout << "\nInput: nums = [1,2,3]" << endl;
    cout << "Output: ";
    result = solution.subsetsWithDup(nums2);
    printResult(result);
    
    return 0;
}
