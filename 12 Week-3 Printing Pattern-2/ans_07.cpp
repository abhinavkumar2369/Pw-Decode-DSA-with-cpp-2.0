#include<iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            if(j == 0 || j == i*2)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    for(int i = m-2; i >= 0; --i) {
        for(int j = 0; j < n; ++j) {
            if(j == 0 || j == i*2)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
