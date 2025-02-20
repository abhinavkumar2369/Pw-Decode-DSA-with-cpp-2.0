#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

int countLoopLength(ListNode* head) {
    ListNode* slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {

            int cnt = 1;
            ListNode* temp = slow->next;
            while (temp != slow) {
                cnt++;
                temp = temp->next;
            }
            return cnt;
        }
    }
    return 0;
}


int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    head->next->next->next->next->next = head->next->next;
    cout << countLoopLength(head) << endl;

    return 0;
}
