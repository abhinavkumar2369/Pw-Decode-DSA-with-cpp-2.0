#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class KthLargest {
    priority_queue<int, vector<int>, greater<int>> pq;
    int k;
public:
    KthLargest(int k, vector<int>& nums) : k(k) {
        for(int x : nums) {
            pq.push(x);
            if(pq.size() > k) pq.pop();
        }
    }
    int add(int val) {
        pq.push(val);
        if(pq.size() > k) pq.pop();
        return pq.top();
    }
};

int main() {
    int k, n, q;
    cin >> k >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; ++i) cin >> nums[i];
    KthLargest kth(k, nums);
    cin >> q;
    while(q--) {
        int val;
        cin >> val;
        cout << kth.add(val) << endl;
    }
    return 0;
}
