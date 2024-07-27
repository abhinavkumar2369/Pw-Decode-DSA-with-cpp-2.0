#include <iostream>
using namespace std;

// Program to compare marks of 3 students
int main(){
    int a,b,c;

    cout << "Enter marks of A : ";
    cin >> a;
    cout << "Enter marks of B : ";
    cin >> b;
    cout << "Enter marks of C : ";
    cin >> c;

    if (a>b){
        if (a>c){
            cout << "A is highest scoring ";
        }
        else{
            cout << "C is highest scoring ";
        }
    }
    else{
        if (b>c){
            cout << "B is highest scoring ";
        }
        else{
            cout << "C is highest scoring ";
        }
    }
    
    return 0;
}