#include <iostream>
using namespace std;

// Program to compare Perimeter & Area of rectangle

int main(){
    float length, breadth, perimeter, area;
    
    cout << "Enter Length ";
    cin >> length;
    cout << "Enter breadth ";
    cin >> breadth;

    perimeter = 2*(length+breadth);
    area = length*breadth;

    if (perimeter>area){
        cout << "Perimeter is more";
    }
    else{
        cout << "Area is more";
    }
    return 0;
}