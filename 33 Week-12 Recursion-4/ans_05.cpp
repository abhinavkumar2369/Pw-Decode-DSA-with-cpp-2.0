#include <iostream>
using namespace std;

void decimalToBinary(int n) {
    if (n == 0) {
        return;
    }
    decimalToBinary(n / 2);
    cout << (n % 2);
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    if (num == 0) {
        cout << "Binary representation: 0" << endl;
    } else if (num < 0) {
        cout << "Binary representation of negative numbers is not supported." << endl;
    } else {
        cout << "Binary representation: ";
        decimalToBinary(num);
        cout << endl;
    }

    return 0;
}
