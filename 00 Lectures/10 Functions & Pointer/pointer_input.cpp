#include<iostream>
using namespace std;

int main(){
    int n;
    int *p1 = &n;

    cout << "Enter n = ";
    cin >> *p1;

    cout << n;
    return 0;
}