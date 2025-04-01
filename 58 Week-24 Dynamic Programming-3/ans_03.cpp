#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices, int fee) {
    int n = prices.size();
    int hold = -prices[0], cash = 0;
    for(int i = 1; i < n; ++i) {
        hold = max(hold, cash - prices[i]);
        cash = max(cash, hold + prices[i] - fee);
    }
    return cash;
}

int main() {
    int n, fee;
    cin >> n >> fee;
    vector<int> prices(n);
    for(int i = 0; i < n; ++i) cin >> prices[i];
    cout << maxProfit(prices, fee) << endl;
    return 0;
}
