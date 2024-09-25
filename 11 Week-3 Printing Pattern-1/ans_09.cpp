#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter value of n = ";
    cin >> n;

    for (int i=1 ; i<=n ; i++){
        for (int j=1 ; j<=(n-i); j++){
            cout << " ";
        }
        for (int j=1 ; j<=i ; j++){
            cout << char(65+j-1);
        }
        cout << endl;
    }
    return 0;
}


//  INPUT : n = 4

//  OUTPUT :
//        A
//      A B
//    A B C
//  A B C D