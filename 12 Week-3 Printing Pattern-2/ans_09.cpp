#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int total = 2*n-1;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n-i-1; ++j) cout << " ";
        for(int j = 0; j < 2*i+1; ++j) {
            if(j%2==0) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    for(int i = n-2; i >= 0; --i) {
        for(int j = 0; j < n-i-1; ++j) cout << " ";
        for(int j = 0; j < 2*i+1; ++j) {
            if(j%2==0) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    return 0;
}
