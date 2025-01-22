#include <stdio.h>

// Recursive function to calculate the sum of array elements
int arraySum(int arr[], int index, int size) {
    // Base case: if we've checked all elements
    if (index == size)
        return 0;
    
    // Add current element with the sum of remaining elements
    return arr[index] + arraySum(arr, index + 1, size);
}

int main() {
    // Example array
    int arr[] = {10, 5, 7, 25, 3, 8, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Display the array
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Calculate and display the sum using recursion
    int sum = arraySum(arr, 0, size);
    printf("Sum of all elements in the array: %d\n", sum);
    
    return 0;
}
