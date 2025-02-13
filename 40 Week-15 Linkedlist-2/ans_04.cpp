#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* removeElements(ListNode* head, int val) {
    ListNode dummy(0);
    dummy.next = head;
    ListNode* curr = &dummy;
    while (curr->next) {
        if (curr->next->val == val) {
            ListNode* tmp = curr->next;
            curr->next = curr->next->next;
            delete tmp;
        } else {
            curr = curr->next;
        }
    }
    return dummy.next;
}


void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}


int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(6);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next = new ListNode(6);
    head = removeElements(head, 6);
    printList(head);

    return 0;
}
