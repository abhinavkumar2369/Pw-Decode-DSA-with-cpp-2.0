#include<iostream>
using namespace std;

// Program to print out all Armstrong numbers between 1 and 500.

int main(){
    for(int i=1 ; i<=500 ; i++){
        int sum = 0;
        int temp = i;
        while (temp){
            sum += (temp%10) * (temp%10) * (temp%10);
            temp = temp/10;
        }
        if (i==sum){
            cout << i << endl;
        }

        return 0;
    }
}