#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int array[] = {1,2,5,6,0,7,-1,100};
    int size = sizeof(array)/sizeof(array[0]);
    int minimum = INT_MAX;
    bool flag = false;
    for (int i=0 ; i<size ; i++){
        minimum = min(minimum,array[i]);
        flag = true;
    }
    if (flag==false) cout<< "No minimum element" << endl;
    else cout << minimum;
}