#include<iostream>
using namespace std;

int main(){
    int x = 4;
    int* p1 = &x;
    
    int y = 5;
    int* p2 = &y;

    cout << &x << endl;   // 0x61ff04
    cout << p1 << endl;   // 0x61ff04
    cout << *p1 << endl;  // 4    --- Dereferencing ---

    cout << &y << endl;    // 0x61ff00
    cout << p2 << endl;    // 0x61ff00
    cout << *p2 << endl;   // 5    --- Dereferencing ---

    *p1 = *p1 + *p2;   
    cout << *p1 << endl;     // 9

    cout << x << " " << y;    // 9   5


    return 0;
}