#include<iostream>
using namespace std;

void odd(int a, int b){
    int i,j;
    if (b>a){
        i=a;
        j=b;
    }
    else{
        i=b;
        j=a;
    }

    for (i ; i<=j ; i++){
        if (i%2==1){
            cout << i << endl;
        }
    }
}

int main(){
    int a,b;

    cout << "Enter the value of a = ";
    cin >> a;

    cout << "Enter the value of b = ";
    cin >> b;

    odd(a,b);
    return 0;
}