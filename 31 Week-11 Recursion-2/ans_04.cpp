#include<iostream>
using namespace std;

int fun(int n) {
    if (n <= 1) return 1;
    if (n % 2 == 0) return fun(n / 2);
    return fun(n / 2) + fun(n / 2 + 1);
}

// Pattern:
// fun(1) = 1
// fun(2) = 1
// fun(3) = 2
// fun(4) = 1
// fun(5) = 3
// fun(6) = 2
// fun(7) = 5
// When analyzing the function further, we see:

// For even n: fun(n) = fun(n/2)
// For odd n: fun(n) = fun(n/2) + fun(n/2+1)
// This function actually computes the Fibonacci numbers in a non-standard way.