#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin >> str;
    int n = str.size();
    for(int i = 0; i < n/2; i++) cout << str[i];
    for(int i = n-1; i >= n/2; i--) cout << str[i];
    cout << endl;
    return 0;
}