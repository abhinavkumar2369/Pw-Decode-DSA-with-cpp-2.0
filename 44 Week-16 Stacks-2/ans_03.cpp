#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> finalPrices(vector<int>& prices) {
    int n = prices.size();
    vector<int> res(prices);
    stack<int> st;
    for(int i = 0; i < n; ++i) {
        while(!st.empty() && prices[st.top()] >= prices[i]) {
            res[st.top()] -= prices[i];
            st.pop();
        }
        st.push(i);
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> prices(n);
    for(int i = 0; i < n; ++i) cin >> prices[i];
    vector<int> ans = finalPrices(prices);
    for(int v : ans) cout << v << " ";
    cout << endl;
    return 0;
}
