#include <stdio.h>

#define MAX 100

void merge(int arr[], int beg, int mid, int end) {
    int i = beg, j = mid + 1, k = beg;
    int temp[MAX];

    while (i <= mid && j <= end) {
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
        while (j <= end) {
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

    for (k = beg; k <= end; k++) {
        arr[k] = temp[k];
    }
}

void mergeSort(int arr[], int beg, int end) {
    if (beg < end) {
        int mid = (beg + end) / 2;
        mergeSort(arr, beg, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, beg, mid, end);
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
