#include<iostream>
#include<climits>
using namespace std;

int most_frequent_element(int arr[], int size){
    int count, max_count=0, max_num = arr[0];

    for (int i=0; i<size; i++){
        if (max_num = arr[i]) continue;
        count = 0;
        for (int j=0; j<size; j++){
            if (arr[i]==arr[j]){
                count++;
            }
        }
        if (count > max_count) max_num=arr[i];
    }
    return max_num;
}

int main(){
    int arr[] = {1,2,2,3,1,4,5,5,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << most_frequent_element(arr,size);
    return 0;
}


// TIME COMPLEXITY : O(n^2)
// SPACE COMPLEXITY : O(1)
