#include<iostream>
using namespace std;

// Program print the sum of a given number and its reverse.

// Sample Input : 12
// Sample Output : 33 [12+21]

int main(){
    int n, rev=0,sum=0;

    cout << "Enter Number : ";
    cin >> n;

    sum = n;

    while (n){
        rev = rev*10 + n%10;
        n = n/10;
    }

    sum = sum + rev;
    cout << sum;

    return 0;
}