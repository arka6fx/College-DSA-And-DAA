#include <stdio.h>
#include <stdlib.h>

#define MAX 5
int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int data){
	if (rear == MAX - 1){
		printf("Queue Overflow");
	}
	else if (rear == -1 && front == -1){
		rear = front = 0;
		queue[rear] = data;
	}
	else
	{
		rear = rear + 1;
		queue[rear] = data;
	}
}

int dequeue(){
	int data;
	if (rear == -1 && front == -1){
		printf("Queue Underflow");
		exit(1);
	}
	else if (rear == front){
		data = queue[front];
		rear = front = -1;
	}
	else{
		data = queue[front];
		front = front + 1;
	}

	return data;
}

void display(){
	if (rear == -1 && front == -1){
		printf("Queue Underflow");
		exit(1);
	}
	int i;
	printf("\n---Queue---\n");
	for (i = front; i <= rear; i++){
		printf("%d ", queue[i]);
	}
}

void IsFull(){
	if (rear == MAX - 1){
		printf("True");
	}
	else{
		printf("False");
	}
}

void IsEmpty()
{
	if (rear == -1 && front == -1){
		printf("True");
	}
	else{
		printf("False");
	}
}

int main(){
	int choice, val;
	while (1){
		printf("\nMenu: \n");
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Display\n");
		printf("4.Is Queue Empty?\n");
		printf("5.Is Queue Full?\n");
		printf("6.Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice){
		case 1:
			printf("Enter the value to insert:");
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
			IsEmpty();
			break;
		case 5:
			IsFull();
			break;
		case 6:
			printf("Exiting...");
			exit(0);
		default:
			printf("\nEnter Valid input!");
		}
	}
	return 0;
}
