#include<iostream>
using namespace std;

int main(){
    string str;
    
    cout << sizeof(str)/sizeof(str[0]);
    cout << str.length() << endl;

    cin >> str;
    cout << str.length() << endl;

    cout << str;
    return 0;
}

// string in C++ is an object, not just a char array
// Length is stored as a member variable
// No need to count characters up to \0
// Empty string has no characters, hence length = 0
// \0 is handled internally by the string class implementation