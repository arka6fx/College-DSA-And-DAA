#include <stdio.h>

int main(){
  int n, i, j, temp;
  printf("Enter the no. of Elements: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the Elements Of the Array: ");
  for (i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }

  // Insertion Sort
  for (i = 1; i <= n - 1; i++){
    temp = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > temp){
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = temp;
  }

  printf("\nThe Sorted Array:\n");
  for (i = 0; i < n; i++){
    printf("%d ", arr[i]);
  }
}