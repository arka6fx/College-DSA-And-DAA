#include <stdio.h>

int main(){
	int n, i, j, flag, temp;
	printf("Enter the no. of Elements: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the Elements Of the Array: ");
	for (i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	// Bubble Sort
	for (i = 1; i <= n - 1; i++){
		flag = 0; // marks the pass where there is no swapping
		for (j = 1; j <= n - i; j++){
			if (arr[j - 1] > arr[j]){
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
				flag = 1;
			}
		}
		if (flag == 0){
			break;
		}
	}

	printf("\nThe sorted Array:\n");
	for (i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
}