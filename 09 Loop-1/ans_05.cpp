#include <iostream>
using namespace std;

//  Program to print GP Series

int main(){
    int n,s, a=3, r=4;
    cout << "Enter N : " ;
    cin >> n ;
    cout << "GP series is --" << endl;
    for (int i=1; i<=n ;i++){
        s=a;
        for (int j=1 ; j<=(i-1) ;j++){
            s=s*r;
        }
        cout << s << "  " ;
    }
    return 0;
}