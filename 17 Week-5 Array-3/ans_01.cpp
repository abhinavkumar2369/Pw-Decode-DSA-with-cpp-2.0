#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countTriplets(vector<int>& arr, int x) {
    int n = arr.size();
    int count = 0;
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n-2; i++) {
        int l = i+1, r = n-1;
        while(l < r) {
            int sum = arr[i] + arr[l] + arr[r];
            if(sum == x) {
                count++;
                l++;
                r--;
            } else if(sum < x) {
                l++;
            } else {
                r--;
            }
        }
    }
    return count;
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << countTriplets(arr, x) << endl;
    return 0;
}
