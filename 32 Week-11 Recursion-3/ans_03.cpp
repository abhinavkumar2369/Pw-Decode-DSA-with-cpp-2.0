#include <stdio.h>

// Recursive function to find the index of an element in an array
// Parameters: arr - the array, target - element to find, index - current position, size - array size
int findIndex(int arr[], int target, int index, int size) {
    // Base case: If we've checked all elements without finding the target
    if (index == size) {
        return -1;
    }
    
    // If current element matches the target
    if (arr[index] == target) {
        return index;
    }
    
    // Recursively search in the rest of the array
    return findIndex(arr, target, index + 1, size);
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
    
    // Elements to search
    int target1 = 7;
    int target2 = 15;
    
    // Search for elements using recursion
    int index1 = findIndex(arr, target1, 0, size);
    int index2 = findIndex(arr, target2, 0, size);
    
    // Display results
    if (index1 != -1) {
        printf("Element %d found at index %d\n", target1, index1);
    } else {
        printf("Element %d not found in the array\n", target1);
    }
    
    if (index2 != -1) {
        printf("Element %d found at index %d\n", target2, index2);
    } else {
        printf("Element %d not found in the array\n", target2);
    }
    
    return 0;
}
