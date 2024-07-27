#include <iostream>
using namespace std;

// program to check whether the entered year is a leap year or not

int main(){
    int year;

    cout << "Enter year : ";
    cin >> year;

    if (year%4==0){
        cout << "Leap Year";
    }
    else{
        cout << "Not a Leap Year";
    }
    
    return 0;
}