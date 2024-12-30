#include<iostream>
#include<vector>

bool sorted(std::vector<int> &arr){
    int n = arr.size();
    for(int i=0; i<n-1; i++){
        if (arr[i]>arr[i+1]) return false;
    }
    return true;
}

int main(){
    int n = 0;
    std::cout << "Enter number of Element in array = ";
    std::cin >> n;

    int num;
    std::vector<int> arr;
    for(int i=0; i<n; i++){
        std::cin >> num;
        arr.push_back(num);
    }
    
    sorted(arr)? std::cout << "Sorted" : std::cout << "Unsorted";
    return 0;
}