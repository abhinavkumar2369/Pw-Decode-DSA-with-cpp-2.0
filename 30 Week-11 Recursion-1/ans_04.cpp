#include<iostream>
using namespace std;

int count(int n){
    if (n<0) return 0;
    if (n==0) return 1;
    return count(n-1) + count(n-2) + count(n-3); 
}

int main(){
    int n;

    cout << "Enter the value of n = " << endl;
    cin >> n;

    cout << count(n);
    return 0;
}