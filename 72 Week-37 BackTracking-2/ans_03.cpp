#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

bool backtrack(vector<int>& matchsticks, vector<int>& sides, int index, int target) {
    if (index == matchsticks.size()) {
        return sides[0] == target && sides[1] == target && sides[2] == target && sides[3] == target;
    }
    for (int i = 0; i < 4; i++) {
        if (sides[i] + matchsticks[index] > target) continue;
        sides[i] += matchsticks[index];
        if (backtrack(matchsticks, sides, index + 1, target)) return true;
        sides[i] -= matchsticks[index];
    }
    return false;
}

bool makesquare(vector<int>& matchsticks) {
    int sum = accumulate(matchsticks.begin(), matchsticks.end(), 0);
    if (sum % 4 != 0) return false;
    sort(matchsticks.rbegin(), matchsticks.rend());
    vector<int> sides(4, 0);
    return backtrack(matchsticks, sides, 0, sum / 4);
}

int main() {
    vector<int> matchsticks = {1, 1, 2, 2, 2};
    cout << (makesquare(matchsticks) ? "true" : "false");
    return 0;
}
