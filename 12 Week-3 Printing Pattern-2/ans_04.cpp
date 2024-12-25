#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int total = 2*n-1;
    for(int i = 0; i < n; ++i) {
        char ch = 'A';
        for(int j = 0; j < n-i; ++j) {
            cout << ch++ << " ";
        }
        for(int j = 0; j < 2*i-1; ++j) {
            cout << "  ";
        }
        ch = 'A' + n - i - 1;
        if(i == 0) ch++;
        for(int j = 0; j < n-i; ++j) {
            if(i == 0 && j == 0) continue;
            cout << ch++ << " ";
        }
        cout << endl;
    }
    return 0;
}
