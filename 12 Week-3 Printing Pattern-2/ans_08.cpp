#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        for(int j = 0; j < n-i; ++j) {
            cout << "  ";
        }
        cout << i;
        for(int j = 0; j < 2*i-3; ++j) {
            cout << " ";
        }
        if(i != 1)
            cout << " " << i;
        cout << endl;
    }
    return 0;
}
