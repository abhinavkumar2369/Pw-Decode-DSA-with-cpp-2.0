#include<iostream>
using namespace std;

void digit_square(int n){
    int count = 0;
    while (n){
        count++;
        n=n/10;
    }
    cout << count*count << endl;
}

int main(){
    int n;
    
    cout << "Enter the value of n = ";
    cin >> n;

    digit_square(n);

    return 0;
}