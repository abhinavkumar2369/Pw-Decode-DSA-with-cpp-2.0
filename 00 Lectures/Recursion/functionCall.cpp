#include<iostream>
using namespace std;

void gun(){
    return;
    cout << "Hello GUN" << endl;
}

void fun(){
    cout << "Hello FUN";
    gun();
    return;  // void
}

int main(){
    fun();
}