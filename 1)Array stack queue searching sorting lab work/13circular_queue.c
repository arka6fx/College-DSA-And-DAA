#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int queue[MAX];
int rear = -1;
int front = -1;

void enqueue(int val)
{
	if (((rear + 1) % MAX) == front)
	{
		printf("Overflow");
		return;
	}
	else if (rear == -1 && front == -1)
	{
		rear = front = 0;
	}
	else
	{
		rear = (rear + 1) % MAX;
	}
	queue[rear] = val;
}

int dequeue()
{
	int data;
	if (rear == -1 && front == -1)
	{
		printf("Underflow");
		exit(1);
	}
	else if (rear == front)
	{
		data = queue[front];
		rear = front = -1;
	}
	else
	{
		data = queue[front];
		front= (front+1)%MAX;
	}
	return data;
}

// void display()
// {
//     if (front == -1 && rear == -1)
//     {
//         printf("Queue is empty\n");
//         return;
//     }

//     printf("Queue elements are: ");
//     int i = front;
//     while (1)
//     {
//         printf("%d ", queue[i]);
//         if (i == rear)
//             break;
//         i = (i + 1) % MAX;
//     }
//     printf("\n");
// }
void display()
{
	printf("Queue state:\n");
	for (int i = 0; i < MAX; i++)
	{
		if (front == -1 && rear == -1) // Queue is empty
		{
			printf("* ");
		}
		else if (front <= rear) // Non-wrapped condition
		{
			if (i >= front && i <= rear)
				printf("%d ", queue[i]);
			else
				printf("* ");
		}
		else // Wrapped condition
		{
			if (i >= front || i <= rear)
				printf("%d ", queue[i]);
			else
				printf("* ");
		}
	}
	printf("\n");
}

int main()
{
	int val, choice;

	while (1)
	{
		printf("\nMenu:\n");
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Display\n");
		printf("4.Exit\n");
		printf("Enter your choice: \n");
		scanf("%d", &choice);
		switch (choice)
		{

		case 1:
			printf("Enter the value you want to enqueue: \n");
			scanf("%d", &val);
			enqueue(val);
			break;
		case 2:
			val = dequeue();
			printf("The dequeued element is %d", val);
			break;
		case 3:
			display();
			break;
		case 4:
			printf("Exiting...");
			exit(0);
		default:
			printf("Enter valid choice ");
			break;
		}
	}
	return 0;
}
