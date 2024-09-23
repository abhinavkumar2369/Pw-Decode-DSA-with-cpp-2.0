#include<iostream>
using namespace std;

int main(){
    int n ;
    
    cout << "Enter value of n = ";
    cin >> n;

    for (int i=0 ; i<n ; i++){
        for (int j=1 ; j<=(n-i) ; j++){
            cout << j ;
        }
        cout << endl;
    }
    return 0;
}


// INPUT :
// Enter value of n = 4


// OUTPUT :

// 1234
// 123
// 12
// 1