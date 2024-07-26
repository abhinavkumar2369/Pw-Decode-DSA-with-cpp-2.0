#include <iostream>
using namespace std;

//  Program to print odd number  between 1 to 100

int main(){
    for(int i=1 ; i<=100 ; i++){
        if (i%2==1){
            cout << i << endl; 
        }
    }
    return 0;
}