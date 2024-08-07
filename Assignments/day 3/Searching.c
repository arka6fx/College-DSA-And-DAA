#include <stdio.h>

void linearSearch(int arr[], int n, int x) {
    printf("Enter the element to search: ");
        scanf("%d", &x);
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            printf("Element %d found at index %d\n", x, i);
            return;
        }
    }
    printf("Element %d not found in the array\n", x);
}

void binarySearch(int arr[], int n, int x) {
    printf("Enter the element to search: ");
        scanf("%d", &x);
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] == x) {
            printf("Element %d found at index %d\n", x, mid);
            return;
        }
        if(arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    printf("Element %d not found in the array\n", x);
}

void sortArray(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Array sorted for binary search.\n");
}

int main() {
    int choice, n, x;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    while(1) {
        
        printf("Choose the search method:\n");
        printf("1. Linear Search\n");
        printf("2. Binary Search\n");
        printf("3. Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                linearSearch(arr, n, x);
                break;
            case 2:
                sortArray(arr, n);
                binarySearch(arr, n, x);
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
