#include<iostream>
using namespace std;

bool rec(int n){
    if (n==1) return true;
    return (n%2==0)? rec(n/2): false;
}

int main(){
    int n;
    
    cout << "Enter a number = ";
    cin >> n;

    cout << rec(n);
    return 0;
}