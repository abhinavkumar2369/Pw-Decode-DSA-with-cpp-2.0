#include<iostream>
#include<vector>

bool sorted(std::vector<int> arr){
    for(int i=0; i<arr.size()-1; i++){
        if (arr[i]>arr[i+1]) return false;
    }
    return true;
}

int main(){
    std::vector<int> arr = {5,2,7,1,3};
    sorted(arr)? std::cout<<"Sorted" : std::cout<<"Not Sorted";
    return 0;
}