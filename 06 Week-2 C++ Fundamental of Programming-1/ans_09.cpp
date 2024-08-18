#include <iostream>
using namespace std;

// Program to check whether entered character is [Alphabet] or [Number] or [Special-Character]

int main() {
    char ch;

    cout << "Enter any character : ";
    cin >> ch;

    if ((ch >= 'a' && ch <= 'a') || (ch >= 'A' && ch <= 'Z')){
        cout << ch << " is an Alphabet ";
    }
    else if (ch >= '0' && ch <= '9') {
        cout << ch << " is a Digit ";
    }
    else {
        cout << ch << " is a Special Character ";
    }

    return 0;
}