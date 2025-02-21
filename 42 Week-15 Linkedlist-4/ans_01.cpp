#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* swapPairs(ListNode* head) {
    ListNode dummy(0);
    dummy.next = head;
    ListNode* prev = &dummy;
    while(head && head->next) {
        ListNode* first = head;
        ListNode* second = head->next;
        prev->next = second;
        first->next = second->next;
        second->next = first;
        prev = first;
        head = first->next;
    }
    return dummy.next;
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
    ListNode* res = swapPairs(dummy->next);
    while(res) {
        cout << res->val << " ";
        res = res->next;
    }
    cout << endl;
    return 0;
}
