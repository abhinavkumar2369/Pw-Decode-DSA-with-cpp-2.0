#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class FindSumPairs {
    vector<int> nums1, nums2;
    unordered_map<int, int> freq2;
public:
    FindSumPairs(vector<int>& n1, vector<int>& n2) : nums1(n1), nums2(n2) {
        for(int x : nums2) freq2[x]++;
    }
    void add(int index, int val) {
        freq2[nums2[index]]--;
        nums2[index] += val;
        freq2[nums2[index]]++;
    }
    int count(int tot) {
        int res = 0;
        for(int x : nums1) {
            res += freq2[tot - x];
        }
        return res;
    }
};

int main() {
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> nums1(n), nums2(m);
    for(int i = 0; i < n; ++i) cin >> nums1[i];
    for(int i = 0; i < m; ++i) cin >> nums2[i];
    FindSumPairs obj(nums1, nums2);
    while(q--) {
        string op;
        cin >> op;
        if(op == "add") {
            int idx, val;
            cin >> idx >> val;
            obj.add(idx, val);
        } else if(op == "count") {
            int tot;
            cin >> tot;
            cout << obj.count(tot) << endl;
        }
    }
    return 0;
}
