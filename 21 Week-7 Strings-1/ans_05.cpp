#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int num = 0;
    for(char c : s) {
        num = num * 10 + (c - '0');
    }
    cout << num << endl;
    return 0;
}
