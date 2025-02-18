#include <stdio.h>
#include <limits.h>

void minMax(int arr[], int i, int j, int *min, int *max) {
    // Base case
    if (i == j) { // one element left
        *min = *max = arr[i];
        return;
    }
    else if (i == j - 1) {  // two elements left
        if (arr[i] > arr[j]) {
            *max = arr[i];
            *min = arr[j];
        } else {
            *max = arr[j];
            *min = arr[i];
        }
        return;
    }
    
    // Divide
    int mid = i + (j - i) / 2;
    int max1, min1, max2, min2;
    
    // Recursive calls
    minMax(arr, i, mid, &min1, &max1);
    minMax(arr, mid + 1, j, &min2, &max2);
    
    // Combine
    *max = (max1 > max2) ? max1 : max2;
    *min = (min1 < min2) ? min1 : min2;
    return;
}

int main() {
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max = INT_MIN;
    int min = INT_MAX;
    
    minMax(arr, 0, n - 1, &min, &max);
    
    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    
    return 0;
}

