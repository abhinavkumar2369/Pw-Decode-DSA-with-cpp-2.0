#include<iostream>
using namespace std;

// Program to print the factorials of first ‘n’ numbers

int main(){
    int n;

    cout << "Enter the value of n = ";
    cin >> n;

    for (int i=1 ; i<=n ; i++){
        int fact = 1;
        for (int j=1 ; j<=i ; j++){
            fact *= j;
        }
        cout << fact << endl;
    }

    return 0;
}