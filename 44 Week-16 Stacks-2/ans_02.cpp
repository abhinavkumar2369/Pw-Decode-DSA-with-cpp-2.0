#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

vector<int> nextLargerNodes(ListNode* head) {
    vector<int> vals;
    while(head) {
        vals.push_back(head->val);
        head = head->next;
    }
    vector<int> res(vals.size(), 0);
    stack<int> st;
    for(int i = 0; i < vals.size(); ++i) {
        while(!st.empty() && vals[i] > vals[st.top()]) {
            res[st.top()] = vals[i];
            st.pop();
        }
        st.push(i);
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    ListNode* dummy = new ListNode(0);
    ListNode* curr = dummy;
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        curr->next = new ListNode(x);
        curr = curr->next;
    }
    vector<int> ans = nextLargerNodes(dummy->next);
    for(int v : ans) cout << v << " ";
    cout << endl;
    return 0;
}
