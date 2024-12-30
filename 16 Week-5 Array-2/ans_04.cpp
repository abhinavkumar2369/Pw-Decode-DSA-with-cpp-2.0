#include<iostream>
#include<vector>

int main(){
    int n;
    std::cout << "Enter number of elements = ";
    std::cin >> n;

    std::vector<int> arr;
    int temp;
    for(int i=0; i<n ; i++){
        std::cin >> temp;
        arr.push_back(temp);
    }

    int even=0,odd=0;
    for(int i=0; i<n; i++){
        if (i%2==0) odd+=arr[i];
        else even+=arr[i];
    }

    std::cout << "Odd = " << odd << std::endl;
    std::cout << "Even = " << even << std::endl;
    
    return 0;
}