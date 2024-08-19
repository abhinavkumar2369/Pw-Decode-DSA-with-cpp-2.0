#include <iostream>
using namespace std;

//  Program to print AP Series

int main(){
    int n, a=4, d=3;
    cout << "Enter N : " ;
    cin >> n ;
    cout << "AP series is --" << endl;
    for (int i=1; i<=n ;i++){
        cout << a+(i-1)*d << " ";
    }
    return 0;
}