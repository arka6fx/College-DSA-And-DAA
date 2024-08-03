// 11. Write a program in C to find the smallest missing element in a sorted array. :
// The given array is : 0 1 3 4 5 6 7 9
// The missing smallest element is: 2
#include <stdio.h>

// Function to find the smallest missing element in a sorted array
int findSmallestMissing(int arr[], int size) {
    int low = 0, high = size - 1;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        
        // If the mid index matches the element, the missing element is in the right half
        if (arr[mid] == mid) {
            low = mid + 1;
        }
        // Otherwise, the missing element is in the left half
        else {
            high = mid - 1;
        }
    }
    
    // The smallest missing element is the value at the low index
    return low;
}

int main() {
    int arr[] = {0, 1, 3, 4, 5, 6, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int missing = findSmallestMissing(arr, size);

    printf("The smallest missing element is: %d\n", missing);

    return 0;
}