#include <stdio.h>

void quickSort(int arr[], int lb, int ub);
int partition(int arr[], int lb, int ub);

void quickSort(int arr[], int lb, int ub) {
    int loc;
    if (lb < ub) {
        loc = partition(arr, lb, ub);
        quickSort(arr, lb, loc - 1);  
        quickSort(arr, loc + 1, ub);  
    }
}

int partition(int arr[], int lb, int ub) {
    int pivot = arr[lb];  
    int start = lb;    
    int end = ub;       

    while (start < end) {
        while (arr[start] <= pivot && start<ub) {
            start++;
        }
        while (arr[end] > pivot && end>lb) {
            end--;
        }
        if (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }

    arr[lb] = arr[end];
    arr[end] = pivot;

    return end;  
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
