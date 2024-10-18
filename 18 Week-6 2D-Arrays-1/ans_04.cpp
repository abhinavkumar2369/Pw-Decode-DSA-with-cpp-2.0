#include<iostream>
using namespace std;

int main(){
    int rows=0, columns=0;

    cout << "Enter number of rows = ";
    cin >> rows;

    cout << "Enter number of columns = ";
    cin >> columns;

    int arr[rows][columns];

    for (int i=0; i<rows; i++){
        for (int j=0 ; j<columns; j++){
            cin >> arr[i][j];
        }
    }

    int largest_element = arr[0][0];

    for (int i=0; i<rows; i++){
        for (int j=0 ; j<columns; j++){
            if (largest_element < arr[i][j]){
                largest_element = arr[i][j];
            }
        }
    }

    cout << "Largest Element " << largest_element;
    return 0;
}