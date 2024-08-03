
#include <stdio.h>

// Function to find the floor of x in a sorted array
int findFloor(int arr[], int size, int x) {
    int low = 0, high = size - 1;
    int result = -1; // Initialize result to -1 (indicates no floor found if remains unchanged)
    
    while (low <= high) {
        int mid = (low + high) / 2;
        
        if (arr[mid] == x) {
            return arr[mid]; // If x is found, it is the floor of itself
        }
        else if (arr[mid] < x) {
            result = arr[mid]; // Update result to current mid
            low = mid + 1; // Move to the right half
        }
        else {
            high = mid - 1; // Move to the left half
        }
    }
    
    return result; // Return the greatest element smaller than or equal to x
}

int main() {
    int arr[] = {1, 3, 4, 7, 8, 9, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 5;

    int floor = findFloor(arr, size, x);

    if (floor == -1) {
        printf("There is no floor for %d in the given array.\n", x);
    } else {
        printf("The floor of %d is: %d\n", x, floor);
    }

    return 0;
}
