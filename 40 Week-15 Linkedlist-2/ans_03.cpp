#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* swapNodes(ListNode* head, int k) {
    ListNode* first = head;
    for (int i = 1; i < k; ++i) first = first->next;
    ListNode* fast = first, *second = head;
    while (fast->next) {
        fast = fast->next;
        second = second->next;
    }
    swap(first->val, second->val);
    return head;
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
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head = swapNodes(head, 2);
    printList(head);

    return 0;
}
