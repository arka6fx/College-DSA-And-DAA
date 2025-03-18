//18/02/25
#include <stdio.h>

void mergeSort(int arr[], int lb, int ub);
void merge(int arr[], int lb, int mid, int ub);
int partition(int arr[], int lb, int ub);
void quickSort(int arr[], int lb, int ub);
void inputArray(int arr[], int n);
void displayArray(int arr[], int n);

int main() {
    int choice, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements of the array: ");
    inputArray(arr, n);

    while (1) {
        printf("\nMenu:\n");
        printf("1. Merge Sort\n");
        printf("2. Quick Sort\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                mergeSort(arr, 0, n - 1);
                printf("Sorted array using Merge Sort: ");
                displayArray(arr, n);
                break;
            case 2:
                quickSort(arr, 0, n - 1);
                printf("Sorted array using Quick Sort: ");
                displayArray(arr, n);
                break;
            case 3:
                printf("Exiting program.\n");
                return 0;   
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

void inputArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void mergeSort(int arr[], int lb, int ub) {
    if (lb >= ub) return;
    int mid = (lb + ub) / 2;
    mergeSort(arr, lb, mid);
    mergeSort(arr, mid + 1, ub);
    merge(arr, lb, mid, ub);
}

void merge(int arr[], int lb, int mid, int ub) {
    int i = lb, j = mid + 1, k = 0;
    int temp[ub - lb + 1];

    while (i <= mid && j <= ub) {
        if (arr[i] < arr[j]) temp[k++] = arr[i++];
        else temp[k++] = arr[j++];
    }
    while (i <= mid) temp[k++] = arr[i++];
    while (j <= ub) temp[k++] = arr[j++];

    for (i = lb, k = 0; i <= ub; i++, k++) {
        arr[i] = temp[k];
    }
}

void quickSort(int arr[], int lb, int ub) {
    if (lb >= ub) return;
    int loc = partition(arr, lb, ub);
    quickSort(arr, lb, loc - 1);
    quickSort(arr, loc + 1, ub);
}

int partition(int arr[], int lb, int ub) {
    int pivot = arr[lb], start = lb, end = ub, temp;
    while (start < end) {
        while (arr[start] <= pivot && start < ub) start++;
        while (arr[end] > pivot && end > lb) end--;
        if (start < end) {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }
    arr[lb] = arr[end];
    arr[end] = pivot;
    return end;
}
