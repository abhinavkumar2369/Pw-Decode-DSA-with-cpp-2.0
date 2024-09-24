#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter value of n = ";
    cin >> n;

    for (int i=1 ; i<=4 ; i++){
        for (int j=1; j<=(n-i) ; j++){
            cout << " ";
        }
        for (int j=1 ; j<=4 ; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

//  INPUT --
//  Enter value of n = 4


//  OUTPUT -- 
//     ****
//    ****
//   ****
//  ****