#include<iostream>
using namespace std;

int main(){

    int n=5;
    n++;
    cout << n << endl;

    int* p = &n;
    cout << p << endl;
    cout << *p << endl;

    p++;
    
    cout << p << endl;
    cout << *p << endl;

    return 0;
}

// 6
// 0x61ff08
// 6
// 0x61ff0c
// 6422284