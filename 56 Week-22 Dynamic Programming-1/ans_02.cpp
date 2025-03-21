#include <iostream>
#include <vector>
using namespace std;

int tribonacci(int n) {
    if(n == 0) return 0;
    if(n == 1 || n == 2) return 1;
    int a = 0, b = 1, c = 1;
    for(int i = 3; i <= n; ++i) {
        int d = a + b + c;
        a = b;
        b = c;
        c = d;
    }
    return c;
}

vector<int> countBits(int n) {
    vector<int> res(n+1, 0);
    for(int i = 1; i <= n; ++i)
        res[i] = res[i >> 1] + (i & 1);
    return res;
}

int main() {
    int n;
    cin >> n;
    cout << tribonacci(n) << endl;
    vector<int> bits = countBits(n);
    for(int x : bits) cout << x << " ";
    cout << endl;
    return 0;
}
