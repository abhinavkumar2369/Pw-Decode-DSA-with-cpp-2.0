#include <iostream>
using namespace std;

// Program to compare 2 entered number 
int main(){
    int num1,num2;
    cout << "Enter First Number " ;
    cin >> num1;
    cout << "Enter Second Number " ;
    cin >> num2;

    if (num1>num2){
        cout << "First number is greater ";
    }
    else {
        cout << "Second number is greater ";
    }
    
    return 0;
}