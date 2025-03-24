#include <iostream>
#include <vector>
using namespace std;

vector<int> countBits(int n) {
    vector<int> res(n+1, 0);
    for(int i = 1; i <= n; ++i)
        res[i] = res[i >> 1] + (i & 1);
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> ans = countBits(n);
    for(int x : ans) cout << x << " ";
    cout << endl;
    return 0;
}
