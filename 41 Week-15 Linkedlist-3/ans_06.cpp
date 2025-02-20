#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

int pairSum(ListNode* head) {
    vector<int> vals;
    while (head) {
        vals.push_back(head->val);
        head = head->next;
    }
    int n = vals.size(), res = 0;
    for (int i = 0; i < n / 2; ++i) {
        res = max(res, vals[i] + vals[n - 1 - i]);
    }
    return res;
}
