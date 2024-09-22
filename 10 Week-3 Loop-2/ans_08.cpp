#include<iostream>
using namespace std;

// Program to print first ‘n’ fibonacci numbers.

// Sample Input : 10
// Output : 1 1 2 3 5 8 13 21 34 55

int main(){
    int n;

    cout << "Enter the Value of n = ";
    cin >> n;

    int a=0,b=1;
    int next = a+b;

    for(int i=1 ; i<=n ; i++){
        cout << b << " ";
        a = b;
        b = next;
        next = b+a;
    }

    return 0;
}