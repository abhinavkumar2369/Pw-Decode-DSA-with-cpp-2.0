#include<iostream>
#include<vector>

int main(){
    std::vector<int> arr;
    int n = 0;
    std::cout << "Enter Number of Elements = ";
    std::cin >> n;
    int temp;
    for(int i=0; i<n; i++){
        std::cin >> temp;
        arr.push_back(temp);
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1;j++){
            if (arr[j]==0){
                std::swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0; i<n; i++){
        std::cout << arr[i] << " ";
    }

    return 0;
}

// EXPLAINATION --
// Using Bubble Sort to maintain there order in which the elements were present.

// INPUT ---
// n = 10
// 5 0 3 2 1 0 0 7 9 0 

// OUTPUT ---
// 5 3 2 1 7 9 0 0 0 0