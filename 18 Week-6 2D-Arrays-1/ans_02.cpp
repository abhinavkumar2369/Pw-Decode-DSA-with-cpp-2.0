#include<iostream>
using namespace std;

int main(){
    int rows=0, columns=0;

    cout << "Enter number of rows = ";
    cin >> rows;

    cout << "Enter number of columns = ";
    cin >> columns;

    int arr_1[rows][columns];
    int arr_2[rows][columns];
    int arr_3[rows][columns];

    // Matrix 1
    cout << "Enter Element of Matrix 1 ----- \n";
    for (int i=0 ; i<3 ; i++){
        for (int j=0 ; j<3 ; j++){
            cin >> arr_1[i][j];
        }
    }

    // Matrix
    cout << "Enter Element of Matrix 2 ----- \n";
    for (int i=0 ; i<3 ; i++){
        for (int j=0 ; j<3 ; j++){
            cin >> arr_2[i][j];
        }
    }

    // Matrix 3
    for (int i=0 ; i<3 ; i++){
        for (int j=0 ; j<3 ; j++){
            arr_3[i][j] = arr_1[i][j] + arr_2[i][j];
        }
    }

    // Printing Matrix 3
    for (int i=0 ; i<3 ; i++){
        for (int j=0 ; j<3 ; j++){
            cout << arr_3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}