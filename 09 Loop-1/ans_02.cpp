#include <iostream>
using namespace std;

// Program to print number divisible by 3 between 1 to 100

int main(){
    for (int i=1 ; i<=100 ; i++){
        if (i%3==0){
            cout << i << endl;
        }
    }
    return 0;
}