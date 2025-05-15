#include <iostream>
#include <vector>
using namespace std;

int findMinFibonacciNumbers(int k) {
    vector<int> fib = {1, 1};
    while (fib.back() < k) {
        fib.push_back(fib[fib.size() - 1] + fib[fib.size() - 2]);
    }
    int count = 0;
    for (int i = fib.size() - 1; i >= 0 && k > 0; --i) {
        if (fib[i] <= k) {
            k -= fib[i];
            count++;
        }
    }
    return count;
}

int main() {
    int k;
    cin >> k;
    cout << findMinFibonacciNumbers(k) << endl;
    return 0;
}
