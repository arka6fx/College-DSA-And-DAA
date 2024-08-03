// 12. Write a program in C to find the ceiling in a sorted array.N.B.:
//  Given a sorted array in ascending order and a value x, the ceiling of x is the smallest element in array greater than or equal to x, 
//  and the floor is the greatest element smaller than or equal to x.
// The given array is : 1 3 4 7 8 9 9 10
// The ceiling of 5 is: 7
#include <stdio.h>
// Function to find the ceiling of x in a sorted array
int findCeiling(int arr[], int size, int x) {
    int low = 0, high = size - 1;
    int result = -1; // Initialize result to -1 (indicates no ceiling found if remains unchanged)
    
    while (low <= high) {
        int mid = (low + high) / 2;
        
        if (arr[mid] == x) {
            return arr[mid]; // If x is found, it is the ceiling of itself
        }
        else if (arr[mid] < x) {
            low = mid + 1; // Move to the right half
        }
        else {
            result = arr[mid]; // Update result to current mid and move to the left half
            high = mid - 1;
        }
    }
    
    return result; // Return the smallest element greater than or equal to x
}

int main() {
    int arr[] = {1, 3, 4, 7, 8, 9, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 5;

    int ceiling = findCeiling(arr, size, x);

    if (ceiling == -1) {
        printf("There is no ceiling for %d in the given array.\n", x);
    } else {
        printf("The ceiling of %d is: %d\n", x, ceiling);
    }

    return 0;
}
