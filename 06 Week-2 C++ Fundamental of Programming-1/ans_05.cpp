#include <iostream>
using namespace std;

// Program to check whether triangle is Equilateral, Isoceles, Scalene
int main(){
    int s1, s2, s3;
    cout << "Enter Sides of Triangle : ";
    cin >> s1 >> s2 >> s3;

    if (s1==s2 && s2==s3){
        cout << "Equilateral Triangle";
    }
    else if(s1==s2 || s2==s3){
        cout << "Isoceles Triangle";
    }
    else{
        cout << "Scalene Triangle";
    }
    
    return 0;
}