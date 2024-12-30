#include<iostream>
#include<vector>

int count(std::vector<int> &arr,int num){
    int count = 0;
    int n = arr.size();
    for(int i=0; i<n; i++) if (num < arr[i]) count++;
    return count;
}

int main(){
    std::vector<int> arr = {2,6,1,7,5,9};
    int num = 4;
    std::cout << count(arr,num);
    return 0;
}