#include <iostream>
using namespace std;

// Program to check whether point lie on orgin, x-axis or y-axis

int main(){
    int x,y;

    cout << "Enter x axis co-ordinate : ";
    cin >> x;
    cout << "Enter y axis co-ordinate : ";
    cin >> y;

    if (x==0 && y==0){
        cout << "Point lies on origin ";
    }
    else if (x==0 && y!=0) {
        cout << "Point lies on x axis ";
    }
    else if(x!=0 && y==0){
        cout << "Point lies on y axis ";
    }
    else {
        cout <<"Point lies on plane ";
    }
    
    return 0;
}