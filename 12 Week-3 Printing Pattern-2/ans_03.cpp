#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n-i-1; ++j) {
            cout << "  ";
        }
        char ch = 'A' + i;
        for(int j = i; j > 0; --j) {
            cout << ch-- << " ";
        }
        cout << ch << " ";
        for(int j = 1; j <= i; ++j) {
            cout << (char)(ch + j) << " ";
        }
        cout << endl;
    }
    return 0;
}
