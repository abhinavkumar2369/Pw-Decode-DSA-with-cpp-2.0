#include<iostream>
#include<limits.h>
using namespace std;

int second_largest(int arr[],int size){
    int ll = INT_MIN;
    int sl = INT_MIN;
    for (int i=0 ; i<size ; i++){
        if(ll<arr[i]){
            sl=ll;
            ll=arr[i];
        }
        else if (sl<arr[i]){
            sl = arr[i];
        }
        
    }
    return sl;
}

int main(){
    
    // int array[] = {23,45,54,1,23,66,97,243,24,78};
    int array[] = {};
    cout << second_largest(array,sizeof(array)/sizeof(array[0])) << endl;
}