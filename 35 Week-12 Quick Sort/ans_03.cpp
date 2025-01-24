#include <vector>
#include <algorithm>
using namespace std;

void fixSwapped(vector<int>& arr) {
    int n = arr.size();
    int x = -1, y = -1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            if (x == -1) x = i;
            y = i + 1;
        }
    }
    if (x != -1 && y != -1) swap(arr[x], arr[y]);
}
