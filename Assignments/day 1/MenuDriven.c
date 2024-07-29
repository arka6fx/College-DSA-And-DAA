#include <stdio.h>

#define N 50

// Function to insert an element
int insert_element(int arr[], int n) {
    int p, pos, val, i;
    if (n >= N) {
        printf("Array is full! Cannot insert more elements.\n");
        return n;
    }
    printf("Enter the position to insert the element (1 to %d): ", n+1);
    scanf("%d", &p);
    if (p < 1 || p > n+1) {
        printf("Invalid position!\n");
        return n;
    }
    pos = p - 1;
    for (i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    printf("Enter the number to insert: ");
    scanf("%d", &val);
    arr[pos] = val;
    n++;
    return n;
}

// Function to delete an element
int delete_element(int arr[], int n) {
    int p, pos, i;
    if (n <= 0) {
        printf("Array is empty! Cannot delete elements.\n");
        return n;
    }
    printf("Enter the position to delete an element (1 to %d): ", n);
    scanf("%d", &p);
    if (p < 1 || p > n) {
        printf("Invalid position!\n");
        return n;
    }
    pos = p - 1;
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    return n;
}

// Function to display the array
void display_array(int arr[], int n) {
    if (n == 0) {
        printf("Array is empty!\n");
        return;
    }
    printf("Your array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[N], n, choice;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n > N) {
        printf("Number of elements exceeds maximum limit of %d\n", N);
        return 1;
    }

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Display the array\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                n = insert_element(arr, n);
                break;
            case 2:
                n = delete_element(arr, n);
                break;
            case 3:
                display_array(arr, n);
                break;
            case 0:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
