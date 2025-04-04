#include <iostream>
using namespace std;

int climbStairs(int n) {
    if(n <= 2) return n;
    int a = 1, b = 2;
    for(int i = 3; i <= n; ++i) {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    cin >> n;
    cout << climbStairs(n) << endl;
    return 0;
}
