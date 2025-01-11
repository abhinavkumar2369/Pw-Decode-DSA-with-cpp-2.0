#include<iostream>
using namespace std;

int countOddSum(int a,int b){
    if (a>b) return 0;
    return ((a%2==1)?a:0) + countOddSum(a+1,b);
}

int main(){
    int a,b;

    cout << "Enter number a = ";
    cin >> a;

    cout << "Enter number b = ";
    cin >> b;

    cout << countOddSum(a,b);
}