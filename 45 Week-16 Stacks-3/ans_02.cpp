#include <iostream>
#include <stack>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* removeNodes(ListNode* head) {
    stack<ListNode*> st;
    ListNode* curr = head;
    while(curr) {
        while(!st.empty() && st.top()->val < curr->val) st.pop();
        st.push(curr);
        curr = curr->next;
    }
    ListNode* prev = nullptr;
    while(!st.empty()) {
        st.top()->next = prev;
        prev = st.top();
        st.pop();
    }
    return prev;
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
    ListNode* res = removeNodes(dummy->next);
    while(res) {
        cout << res->val << " ";
        res = res->next;
    }
    cout << endl;
    return 0;
}
