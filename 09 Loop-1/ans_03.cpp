#include <iostream>
using namespace std;

// Program to print TABLE of entered number

int main(){
    int n;
    cin >> n;
    for (int i=1 ; i<=10 ; i++){
        cout << n << " X "<< i << " = " << i*n << endl ;
    }
    return 0;
}