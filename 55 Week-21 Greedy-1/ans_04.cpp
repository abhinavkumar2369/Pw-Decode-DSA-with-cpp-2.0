#include <iostream>
#include <cmath>
using namespace std;

int minOperations(int n) {
    int operations = 0;
    while (n > 0) {
        int power = pow(2, floor(log2(n)));
        if (power * 2 - n < n - power) power *= 2;
        n = abs(n - power);
        operations++;
    }
    return operations;
}

int main() {
    int n;
    cin >> n;
    cout << minOperations(n) << endl;
    return 0;
}
