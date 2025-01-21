#include <iostream>
using namespace std;

int findMin(int arr[], int i, int n) {
    if (i == n - 1)
        return arr[i];
    
    int minRest = findMin(arr, i + 1, n);

    return (arr[i] < minRest) ? arr[i] : minRest;
}

int main() {
    int arr[] = {10, 5, 7, 25, 3, 8, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int min = findMin(arr, 0, n);
    cout << "Minimum element in the array: " << min << endl;
    return 0;
}
