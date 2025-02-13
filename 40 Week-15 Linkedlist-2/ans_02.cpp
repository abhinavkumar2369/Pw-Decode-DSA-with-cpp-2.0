#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
    ListNode* prevA = list1;
    for (int i = 1; i < a; ++i) prevA = prevA->next;
    ListNode* afterB = prevA;
    for (int i = 0; i <= b - a + 1; ++i) afterB = afterB->next;
    prevA->next = list2;
    ListNode* tail2 = list2;
    while (tail2->next) tail2 = tail2->next;
    tail2->next = afterB;
    return list1;
}


void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    ListNode* list1 = new ListNode(0);
    list1->next = new ListNode(1);
    list1->next->next = new ListNode(2);
    list1->next->next->next = new ListNode(3);
    list1->next->next->next->next = new ListNode(4);
    list1->next->next->next->next->next = new ListNode(5);

    ListNode* list2 = new ListNode(1000000);
    list2->next = new ListNode(1000001);
    list2->next->next = new ListNode(1000002);
    ListNode* result = mergeInBetween(list1, 3, 4, list2);
    printList(result);

    return 0;
}
