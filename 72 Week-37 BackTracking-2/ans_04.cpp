#include <iostream>
#include <vector>
using namespace std;

void combineHelper(int start, int n, int k, vector<int>& current, vector<vector<int>>& result) {
    if (k == 0) {
        result.push_back(current);
        return;
    }
    for (int i = start; i <= n; i++) {
        current.push_back(i);
        combineHelper(i + 1, n, k - 1, current, result);
        current.pop_back();
    }
}

vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> result;
    vector<int> current;
    combineHelper(1, n, k, current, result);
    return result;
}

int main() {
    int n = 4, k = 2;
    vector<vector<int>> combinations = combine(n, k);
    for (auto combination : combinations) {
        cout << "[";
        for (int num : combination) {
            cout << num << " ";
        }
        cout << "] ";
    }
    return 0;
}
