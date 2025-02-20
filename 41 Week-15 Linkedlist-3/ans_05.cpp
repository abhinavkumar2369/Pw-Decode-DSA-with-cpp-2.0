#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

int getDecimalValue(ListNode* head) {
    int num = 0;
    while (head) {
        num = (num << 1) | head->val;
        head = head->next;
    }
    return num;
}
