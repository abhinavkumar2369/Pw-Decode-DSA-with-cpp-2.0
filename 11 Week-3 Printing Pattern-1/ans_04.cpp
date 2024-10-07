#include<iostream>
using namespace std;

int main(){
    int n;
    cout  << "Enter n ";
    cin >> n;

    for (int i=1; i<=5 ; i++){

        // For Number
        if (i%2==1){
            for(int j=1 ; j<=i ; j++){
                cout << j  << " ";
            }
            cout << endl;
        }

        // For Character
        if (i%2==0){
            for(int j=1 ; j<=i ; j++){
                cout << char(64+j)  << " ";
            }
            cout << endl;
        }
    }

    return 0;
}