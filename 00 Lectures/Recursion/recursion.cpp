#include<iostream>
using namespace std;

void fun(int n){
    if (n==0) return;
    cout << "Hello PW" << endl;
    fun(n-1);
}

int main(){
    fun(3);
}

// Function Calling to itself