#include <iostream>
using namespace std;

// Program to check whether point lie on same straight line or not

int main(){
    int x1,y1, x2,y2, x3,y3;
    float slope_1 , slope_2;

    cout << "Co-ordinate of Point 1 : ";
    cin >> x1 >> y1 ;
    cout << "Co-ordinate of Point 1 : ";
    cin >> x2 >> y2 ;
    cout << "Co-ordinate of Point 1 : ";
    cin >> x3 >> y3 ;

    slope_1 = (y2-y1)/(x2-x1);
    slope_2 = (y3-y2)/(x3-x2);

    if (slope_1==slope_2){
        cout << "All point lies on same straight line ";
    }
    else {
        cout << "All points do not lies on same straight line ";
    }

    return 0;
}