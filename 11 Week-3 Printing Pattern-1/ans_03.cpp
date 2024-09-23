#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter the value of n = ";
    cin >> n;
    
    for (int i=1; i<=4 ; i++){
        for (int j=65; j<(65+i); j++){
            cout << (char)j;
        }
        cout << endl;
    }
    
    return 0;
}


// INPUT :

// Enter the value of n = 4


// OUTPUT --

// A
// AB
// ABC
// ABCD