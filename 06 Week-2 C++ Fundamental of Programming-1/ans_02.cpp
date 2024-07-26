#include <iostream>
#include <cmath>
using namespace std;

// Program to compare circumfernce & area for same radius
int main(){
    float radius,circumference,area;

    cout << "Enter Radius ";
    cin >> radius;
    circumference = 2*M_PI*radius;
    area = M_PI*radius*radius;

    if (circumference>area){
        cout << "Circumfernce is more ";
    }
    else{
        cout << "Area is more ";
    }
    
    return 0;
}