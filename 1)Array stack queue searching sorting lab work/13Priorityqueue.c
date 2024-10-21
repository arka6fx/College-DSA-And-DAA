#include <stdio.h>

#define MAX 6

int queue[MAX], priority[MAX], size = -1;

void enqueue(int prio, int value) {
    if (size >= MAX - 1) {  // Corrected condition
        printf("Overflow: Priority Queue is full!\n");
        return;
    }
    queue[++size] = value;
    priority[size] = prio;
}

int dequeue() {
    if (size == -1) {
        printf("Underflow: Priority Queue is empty!\n");
        return -1; // Indicate an error
    }
    int idx = 0;
    for (int i = 1; i <= size; i++) {  // Corrected loop condition
        if (priority[i] < priority[idx]) {
            idx = i;
        }
    }
    int value = queue[idx];
    for (int i = idx; i < size; i++) {  // Corrected loop condition
        queue[i] = queue[i + 1];
        priority[i] = priority[i + 1];
    }
    size--;
    return value;
}

void display() {
    if (size == -1) {
        printf("Priority Queue is empty!\n");
        return;
    }
    printf("Priority Queue elements:\n");
    for (int i = 0; i <= size; i++) {  // Corrected loop condition
        printf("%d[Priority: %d] ", queue[i], priority[i]);
    }
}

int main() {
    int choice, val, prio;

    while (1) {
        printf("\nMenu:\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value and priority: ");
                scanf("%d %d", &val, &prio);
                enqueue(prio, val);
                break;
            case 2:
                if (size > -1) {  // Corrected condition
                    printf("The dequeued element is %d\n", dequeue());
                }
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
