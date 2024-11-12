#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main(){
    string str = "1234567890987654321";
    long long x = stoll(str);
    cout << x;
}