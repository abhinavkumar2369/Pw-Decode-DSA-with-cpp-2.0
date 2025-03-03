#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int calPoints(vector<string>& ops) {
    stack<int> st;
    for(string& op : ops) {
        if(op == "+") {
            int top = st.top(); st.pop();
            int newtop = st.top();
            int sum = top + newtop;
            st.push(top);
            st.push(sum);
        } else if(op == "D") {
            st.push(st.top() * 2);
        } else if(op == "C") {
            st.pop();
        } else {
            st.push(stoi(op));
        }
    }
    int res = 0;
    while(!st.empty()) {
        res += st.top();
        st.pop();
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<string> ops(n);
    for(int i = 0; i < n; ++i) cin >> ops[i];
    cout << calPoints(ops) << endl;
    return 0;
}
