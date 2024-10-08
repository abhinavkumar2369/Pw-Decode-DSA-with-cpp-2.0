#include<iostream>
using namespace std;

int main(){
    int x, y;

    cout << "Enter x = ";
    cin >> x;
    int* p1 = &x;

    cout << "Enter y = ";
    cin >> y;
    int* p2 = &y;

    int product = (*p1) * (*p2);
    cout << "Product = " << product;

    return 0;
}