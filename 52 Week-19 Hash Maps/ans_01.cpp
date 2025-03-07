#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    unordered_map<int, int> freq;
    for(int x : arr1) freq[x]++;
    vector<int> res;
    for(int x : arr2) {
        while(freq[x]--) res.push_back(x);
        freq.erase(x);
    }
    vector<int> rest;
    for(auto& p : freq)
        for(int i = 0; i < p.second; ++i)
            rest.push_back(p.first);
    sort(rest.begin(), rest.end());
    res.insert(res.end(), rest.begin(), rest.end());
    return res;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n), arr2(m);
    for(int i = 0; i < n; ++i) cin >> arr1[i];
    for(int i = 0; i < m; ++i) cin >> arr2[i];
    vector<int> res = relativeSortArray(arr1, arr2);
    for(int x : res) cout << x << " ";
    cout << endl;
    return 0;
}
