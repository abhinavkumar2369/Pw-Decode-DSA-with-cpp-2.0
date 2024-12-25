#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n*2-1; ++j) {
            if(j == 0 || j == n*2-2 - 2*i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
