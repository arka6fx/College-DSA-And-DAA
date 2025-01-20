#include <stdio.h>
#include <stdlib.h>

int linearSearch(int arr[], int n, int data)
{
	int i, idx;
	for (i = 0; i <= n - 1; i++)
	{
		if (arr[i] == data)
		{
			idx = i;
			return idx;
		}
	}
	printf("Element %d not found in the array\n", data);
	exit(1);
}
void bubbleSort(int arr[], int n)
{
	int flag, temp, i, j;
	for (i = 1; i <= n - 1; i++)
	{
		flag = 0; // marks the pass where there is no swapping
		for (j = 1; j <= n - i; j++)
		{
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}

int binarySearch(int arr[], int n, int data)
{
	bubbleSort(arr, n);
	int start = 0, end = n - 1, idx, mid;
	while (start <= end)
	{
		mid = start + (end - start) / 2;
		if (arr[mid] == data)
		{
			idx = mid;
			return idx;
		}
		else if (arr[mid] < data)
		{
			start = mid + 1;
		}
		else
			end = mid - 1;
	}
	printf("Element %d not found in the array\n", data);
	exit(1);
}

int main()
{
	int choice, n, idx, data, i;
	printf("Enter the number of elements: ");
	scanf("%d", &n);

	int arr[n];
	printf("Enter the elements of the array: ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	while (1)
	{

		printf("\nChoose the search method:\n");
		printf("1. Linear Search\n");
		printf("2. Binary Search\n");
		printf("3. Exit\n");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("Enter the Element to Find: ");
			scanf("%d", &data);
			idx = linearSearch(arr, n, data);
			printf("%d is present at index %d", data, idx);
			break;
		case 2:
			printf("Enter the Element to Find: ");
			scanf("%d", &data);
			idx = binarySearch(arr, n, data);
			printf("%d is present at index %d", data, idx);
			break;
		case 3:
			printf("Exiting...");
			exit(0);
		default:
			printf("Invalid choice!\n");
		}
	}

	return 0;
}
