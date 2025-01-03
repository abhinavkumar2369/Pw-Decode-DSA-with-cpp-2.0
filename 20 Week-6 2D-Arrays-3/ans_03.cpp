#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                break;
            }
        }
        if (j == n) {
            cout << arr[i];
            return 0;
        }
    }

    cout << "No non-repeating element found.";
    return 0;
}