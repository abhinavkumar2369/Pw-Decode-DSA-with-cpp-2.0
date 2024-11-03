#include<iostream>
#include<vector>

void bubbleSortDescending(std::vector<int> &arr);

int main(){
    std::vector<int> arr = {4,8,1,3,5,2};
    bubbleSortDescending(arr);
    for(int i: arr){
        std::cout << i << " ";
    }
    return 0;
}

void bubbleSortDescending(std::vector<int> &arr){
    int n = arr.size();
    for(int i=0; i<n-1 ; i++){
        for(int j=0; j<n-i-1; j++){
            if (arr[j]<arr[j+1]) std::swap(arr[j],arr[j+1]);
        }
    }
}