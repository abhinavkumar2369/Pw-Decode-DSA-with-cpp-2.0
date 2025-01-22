#include <stdio.h>

// Recursive function to print array elements in reverse order
void printReverseArray(int arr[], int size) {
    // Base case: if size becomes 0, we've printed all elements
    if (size == 0)
        return;
    
    // Print the last element first
    printf("%d ", arr[size - 1]);
    
    // Recursively print remaining elements
    printReverseArray(arr, size - 1);
}

// Alternative approach with index parameter
void printReverse(int arr[], int index) {
    // Base case: if index becomes negative, we've printed all elements
    if (index < 0)
        return;
    
    // Print current element
    printf("%d ", arr[index]);
    
    // Recursively print previous elements
    printReverse(arr, index - 1);
}

int main() {
    // Example array
    int arr[] = {10, 5, 7, 25, 3, 8, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Display the original array
    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Print array in reverse using first method
    printf("Array in Reverse (Method 1): ");
    printReverseArray(arr, size);
    printf("\n");
    
    // Print array in reverse using second method
    printf("Array in Reverse (Method 2): ");
    printReverse(arr, size - 1);
    printf("\n");
    
    return 0;
}
