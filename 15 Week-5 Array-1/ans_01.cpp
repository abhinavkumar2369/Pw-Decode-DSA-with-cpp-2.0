#include<iostream>
using namespace std;

int main(){

    // Inintializing Array
    int array[10] = {1,2,3,4,5,6,7,8,9,10};

    // Product of all elements
    int product_sum = 0;

    // Size of Array
    int size_of_array = sizeof(array)/sizeof(array[0]);

    // Interating through each element
    for (int i=0; i<size_of_array ; i++){
        product_sum += array[i];
    }

    // Printing sum
    cout << product_sum << endl;
}