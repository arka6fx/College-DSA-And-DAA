#include <stdio.h>

void quickSort(int arr[], int beg, int end);
int partition(int arr[], int beg, int end);

void quickSort(int arr[], int beg, int end) {
    int loc;
    if (beg < end) {
        loc = partition(arr, beg, end);
        quickSort(arr, beg, loc - 1);  // Recursively sort the left partition
        quickSort(arr, loc + 1, end);  // Recursively sort the right partition
    }
}

int partition(int arr[], int beg, int end) {
    int pivot = arr[beg];  // Choose the first element as pivot
    int left = beg;    // Start `left` from the next element
    int right = end;       // `right` starts from the end of the array

    while (left <= right) {
        // Move `left` forward while elements are smaller or equal to pivot
        while (left <= end && arr[left] <= pivot) {
            left++;
        }
        // Move `right` backward while elements are larger than pivot
        while (arr[right] > pivot) {
            right--;
        }
        // If `left` is still less than `right`, swap the elements
        if (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }

    // Place pivot in its correct position
    int temp = arr[beg];
    arr[beg] = arr[right];
    arr[right] = temp;

    return right;  // Return the index of the pivot
}

int main() {
    int n, i;

    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
