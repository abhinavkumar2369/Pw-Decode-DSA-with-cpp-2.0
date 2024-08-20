#include<iostream>
using namespace std;

int main(){
    int arr[] = {12,45,10,7,34,57,90};
    int minimum = arr[0];
    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i=0 ; i<size ; i++){
        if(minimum > arr[i])  minimum=arr[i];
    }

    cout << minimum;
}