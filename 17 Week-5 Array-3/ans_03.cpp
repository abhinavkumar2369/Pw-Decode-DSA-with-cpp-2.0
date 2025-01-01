#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int firstNonRepeating(vector<int>& arr) {
    unordered_map<int, int> freq;
    for(int x : arr) freq[x]++;
    for(int x : arr) {
        if(freq[x] == 1) return x;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << firstNonRepeating(arr) << endl;
    return 0;
}
