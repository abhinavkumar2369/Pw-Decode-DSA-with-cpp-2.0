#include<iostream>
using namespace std;

int main(){
    cout << sizeof(int) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(string) << endl;

    // 4
    // 8
    // 1
    // 24


    int x=9;
    cout << &x;

    // 0x61ff0c
    
    return 0;
}