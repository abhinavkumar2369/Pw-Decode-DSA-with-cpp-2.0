#include<iostream>

int main(){
    int arr[] = {5,4,6,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                std::swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0; i<n; i++){
        std::cout << arr[i] << " ";
    }
    return 0;
}

// ANSWER ---
// 1 2 3 4 5 6