#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount+1, amount+1);
    dp[0] = 0;
    for(int i = 1; i <= amount; ++i) {
        for(int c : coins) {
            if(i - c >= 0)
                dp[i] = min(dp[i], dp[i-c] + 1);
        }
    }
    return dp[amount] > amount ? -1 : dp[amount];
}

int main() {
    int n, amount;
    cin >> n >> amount;
    vector<int> coins(n);
    for(int i = 0; i < n; ++i) cin >> coins[i];
    cout << coinChange(coins, amount) << endl;
    return 0;
}
