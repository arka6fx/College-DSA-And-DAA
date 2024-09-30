#include <stdio.h>

#define MAX 100

void merge(int arr[], int lb, int mid, int ub) {
    int i = lb, j = mid + 1, k = lb;
    int temp[MAX];

    while (i <= mid && j <= ub) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i = i + 1;
        } else {
            temp[k] = arr[j];
            j = j + 1;
        }
        k = k + 1;
    }

    if (i > mid) {
        while (j <= ub) {
            temp[k] = arr[j];
            j = j + 1;
            k = k + 1;
        }
    } else {
        while (i <= mid) {
            temp[k] = arr[i];
            i = i + 1;
            k = k + 1;
        }
    }

    for (k = lb; k <= ub; k++) {
        arr[k] = temp[k];
    }
}

void mergeSort(int arr[], int lb, int ub) {
    if (lb < ub) {
        int mid = (lb + ub) / 2;
        mergeSort(arr, lb, mid);
        mergeSort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}

int main() {
    int arr[MAX], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    mergeSort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
