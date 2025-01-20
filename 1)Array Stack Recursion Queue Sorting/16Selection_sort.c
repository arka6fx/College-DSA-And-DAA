#include <stdio.h>

int main(){
	int n, i, j, min, temp;
	printf("Enter the no. of Elements: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the Elements Of the Array: ");
	for (i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	// Selection Sort
	for (i = 0; i <= n - 2; i++){
		min = i;
		for (j = i + 1; j <= n - 1; j++){
			if (arr[j] < arr[min]){
				min = j;
			}
		}
		if (min != i){
			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}

	printf("\nThe Sorted Array:\n");
	for (i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
}