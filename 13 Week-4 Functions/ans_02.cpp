#include<iostream>
using namespace std;

float area(int r){
    return 3.14*r*r;
}

int main(){
    float r;

    cout << "Enter Radius = ";
    cin >> r;

    cout << "Area = "<< area(r);

    return 0;
}