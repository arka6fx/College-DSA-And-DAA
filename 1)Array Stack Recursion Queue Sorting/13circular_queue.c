#include <stdio.h>
#include <stdlib.h>

#define MAX 5
int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int data){
	if ((rear + 1) % MAX == front){
		printf("Queue Overflow");
	}
	else if (rear == -1 && front == -1){
		rear = front = 0;
		queue[rear] = data;
	}
	else{
		rear = (rear + 1) % MAX;
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
		front = (front + 1) % MAX;
	}

	return data;
}

// void display(){
//	if( rear==-1 && front==-1){
//		printf("Queue Underflow");
//		exit(1);
//	}
//	int i;
//	printf("\n---Circular Queue---\n");
//	for(i = front;i != rear;i = (i+1)%MAX){
//		printf("%d ",queue[i]);
//	}
//	printf("%d ",queue[i]);
//
// }

void display(){
	if (rear == -1 && front == -1){
		printf("Queue Underflow");
		exit(1);
	}
	int i;
	printf("\n---Circular Queue---\n");
	for (i = 0; i < MAX; i++){
		if (rear == -1 && front == -1){
			printf("* ");//Queue Underflow
		}
		else if (front <= rear){
			if (i >= front && i <= rear ){
				printf("%d ", queue[i]);
			}
			else{
				printf("* ");
			}
		}
		else{
			if (i <= rear || i >= front){
				printf("%d ", queue[i]);
			}
			else{
				printf("* ");
			}
		}
	}
}

void IsFull(){
	if ((rear + 1) % MAX == front){
		printf("True");
	}
	else{
		printf("False");
	}
}

void IsEmpty(){
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
		switch (choice)
		{
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
