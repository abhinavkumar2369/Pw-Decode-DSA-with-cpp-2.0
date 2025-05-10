#include <iostream>
#include <vector>
using namespace std;

bool subsetProduct(vector<int> &arr, int target, int index, int product) {
    if (product == target) return true;
    if (index >= arr.size() || product > target) return false;

    if (subsetProduct(arr, target, index + 1, product * arr[index])) return true;


    return subsetProduct(arr, target, index + 1, product);
}

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];

    if (subsetProduct(arr, target, 0, 1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
