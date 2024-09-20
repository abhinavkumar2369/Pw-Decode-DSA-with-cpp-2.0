#include<iostream>
using namespace std;


// Program to print the sum of all the even digits of a given number

int main(){
    int n,sum=0;

    cout << "Enter n = ";
    cin >> n;

    while (n){
        int digit = n%10;
        if (digit%2==0){
            sum += digit;
        }
        n = n/10;
    }
    cout << sum;
    
    return 0;
}