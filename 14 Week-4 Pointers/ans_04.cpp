#include<iostream>
using namespace std;

int main(){
    
    int a = 15, b = 20;
    int *ptr = &a;
    int *ptr2 = &b;
    *ptr = *ptr2;

    return 0;
}


//  OUTPUT  (from the option) ---

//  a gets value of b