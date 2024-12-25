#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int total = 2*n-1;
    for(int i = 0; i < n; ++i) {
        int num = 1;
        for(int j = 0; j < n-i; ++j) {
            cout << num++ << " ";
        }
        for(int j = 0; j < 2*i-1; ++j) {
            cout << "  ";
        }
        num = n-i;
        if(i == 0) num--;
        for(int j = 0; j < n-i; ++j) {
            if(i == 0 && j == 0) continue;
            cout << num-- << " ";
        }
        cout << endl;
    }
    return 0;
}
