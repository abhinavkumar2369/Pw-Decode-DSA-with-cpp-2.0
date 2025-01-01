#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool isSubset(vector<int>& arr1, vector<int>& arr2) {
    unordered_map<int, int> freq;
    for(int x : arr1) freq[x]++;
    for(int x : arr2) {
        if(freq[x] == 0) return false;
        freq[x]--;
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n), arr2(m);
    for(int i = 0; i < n; i++) cin >> arr1[i];
    for(int i = 0; i < m; i++) cin >> arr2[i];
    if(isSubset(arr1, arr2)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
