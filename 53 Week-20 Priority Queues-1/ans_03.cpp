#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

struct cmp {
    bool operator()(ListNode* a, ListNode* b) {
        return a->val > b->val;
    }
};

ListNode* mergeKLists(vector<ListNode*>& lists) {
    priority_queue<ListNode*, vector<ListNode*>, cmp> pq;
    for(auto l : lists) if(l) pq.push(l);
    ListNode dummy(0), *tail = &dummy;
    while(!pq.empty()) {
        ListNode* node = pq.top(); pq.pop();
        tail->next = node;
        tail = tail->next;
        if(node->next) pq.push(node->next);
    }
    return dummy.next;
}

int main() {
    int k;
    cin >> k;
    vector<ListNode*> lists(k);
    for(int i = 0; i < k; ++i) {
        int n;
        cin >> n;
        ListNode* dummy = new ListNode(0), *curr = dummy;
        for(int j = 0; j < n; ++j) {
            int x; cin >> x;
            curr->next = new ListNode(x);
            curr = curr->next;
        }
        lists[i] = dummy->next;
    }
    ListNode* res = mergeKLists(lists);
    while(res) {
        cout << res->val << " ";
        res = res->next;
    }
    cout << endl;
    return 0;
}
