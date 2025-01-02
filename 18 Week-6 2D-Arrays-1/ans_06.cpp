#include<iostream>
using namespace std;

int main(){
    int rows=0 , columns=0;

    cout << "Enter number of rows = ";
    cin >> rows;

    cout << "Enter number of columns = ";
    cin >> columns;

    int arr[rows][columns];

    cout << "Enter Element of Matrix --- \n";
    for (int i=0 ; i<rows ; i++){
        for (int j=0 ; j<columns ; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Output -- \n";
    for (int i=0 ; i<rows ; i++){
        for (int j=0 ; j<columns ; j++){
            if (i==(rows/2) || j==(columns/2)){
                cout << arr[i][j] << " ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}