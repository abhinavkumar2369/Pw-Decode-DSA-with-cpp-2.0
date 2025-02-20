#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* insertionSortList(ListNode* head) {
    ListNode dummy(0);
    ListNode* curr = head;
    while (curr) {
        ListNode* prev = &dummy;
        while (prev->next && prev->next->val < curr->val) {
            prev = prev->next;
        }
        ListNode* next = curr->next;
        curr->next = prev->next;
        prev->next = curr;
        curr = next;
    }
    return dummy.next;
}
