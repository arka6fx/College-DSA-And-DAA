//18/02/25
#include <stdio.h>

// Binary Search using Recursion
int binarySearch(int arr[], int low, int high, int key) {
    if (low > high)
        return -1; // Base case: Element not found

    int mid = low + (high - low) / 2;

    if (arr[mid] == key)
        return mid; // Element found
    else if (arr[mid] > key)
        return binarySearch(arr, low, mid - 1, key); // Search in left half
    else
        return binarySearch(arr, mid + 1, high, key); // Search in right half
}


int main() {
    int n, key;

    // Taking user input for array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];

    // Taking user input for array elements (must be sorted)
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Taking user input for the key to be searched
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Calling Binary Search
    int result = binarySearch(arr, 0, n - 1, key);
    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
