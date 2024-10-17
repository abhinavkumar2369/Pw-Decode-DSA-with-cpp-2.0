#include<iostream>
using namespace std;

// This function takes two integer references a and b
void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a,b;

    cin >> a >> b;
    cout << a << " " << b << endl;

    swap(a,b);
    cout << a << " " << b;

}