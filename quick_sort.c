#include <stdio.h>
void quickSort(int arr[], int beg, int end);
int partition(int arr[], int beg, int end);

void quickSort(int arr[], int beg, int end) {
    int loc;
    if (beg < end) {
        loc = partition(arr, beg, end);
        quickSort(arr, beg, loc - 1);
        quickSort(arr, loc + 1, end);
    }
}

int partition(int arr[], int beg, int end) {
    int pivot = arr[beg];
    int left = beg;
    int right = end;

    while (left < right) {
        while (arr[left] <= pivot && left < right)
            left++;
        while (arr[right] > pivot )
            right--;
        
        if (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }

    arr[beg] = arr[right];
    arr[right] = pivot;

    return right;
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
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
