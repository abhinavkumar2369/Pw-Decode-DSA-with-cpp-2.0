#include <iostream>
#include <stack>
#include<vector>
using namespace std;

void removeKthFromTop(stack<int>& st, int k) {
    stack<int> temp;
    for(int i = 1; i < k && !st.empty(); ++i) {
        temp.push(st.top());
        st.pop();
    }
    if(!st.empty()) st.pop();
    while(!temp.empty()) {
        st.push(temp.top());
        temp.pop();
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    stack<int> st;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        st.push(x);
    }
    removeKthFromTop(st, k);
    vector<int> res;
    while(!st.empty()) {
        res.push_back(st.top());
        st.pop();
    }
    for(int i = res.size()-1; i >= 0; --i) cout << res[i] << " ";
    cout << endl;
    return 0;
}
