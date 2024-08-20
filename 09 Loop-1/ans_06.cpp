#include <iostream>
using namespace std;

// Program to print all number with there ASCII value

int main(){
    for (int i=0 ; i<26 ; i++){
        cout << (char)(i+'A') <<" = " << int('A')+i<< endl ;
    }
    return 0;
}