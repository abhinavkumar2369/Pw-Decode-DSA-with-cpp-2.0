#include <iostream>
#include <vector>
using namespace std;

void multiply(vector<int>& res, int x) {
    int carry = 0;
    for(int i = 0; i < res.size(); i++) {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }
    while(carry) {
        res.push_back(carry % 10);
        carry /= 10;
    }
}

void factorial(int n) {
    vector<int> res;
    res.push_back(1);
    for(int i = 2; i <= n; i++) {
        multiply(res, i);
    }
    for(int i = res.size()-1; i >= 0; i--) cout << res[i];
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    factorial(n);
    return 0;
}
