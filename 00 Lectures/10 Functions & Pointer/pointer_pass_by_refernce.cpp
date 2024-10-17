#include<iostream>
using namespace std;

void swap(int* p1,  int* p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}


int main(){
    int a=1, b=2;

    cout << a << " " << b << endl;
    swap(&a,&b);
    cout << a << " " << b;

    return 0;   
}