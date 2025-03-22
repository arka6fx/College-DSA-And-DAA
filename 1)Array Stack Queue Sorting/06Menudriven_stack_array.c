#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int stack[MAX];
int top = -1;

void push(int data){
	if (top == MAX - 1){
		printf("Stack Overflow");
	}
	else{
		top = top + 1;
		stack[top] = data;
	}
	return;
}

int pop(){
	int data;
	if (top == -1)
	{
		printf("Stack Underflow");
		exit(1);
	}
	else
	{
		data = stack[top];
		top = top - 1;
	}

	return data;
}

void display(){
	int i;
	if (top == -1){
		printf("Stack Underflow");
	}
	for (i = 0; i <= top; i++){
		printf("%d ", stack[i]);
	}
}

void IsEmpty(){
	if (top == -1){
		printf("True");
	}
	else{
		printf("False");
	}
}

void IsFull(){
	if (top == MAX - 1){
		printf("True");
	}
	else{
		printf("False");
	}
}

int main(){
	int data, choice;
	printf("\n-----Implementation of Stack using Array-----\n");

	while (1){
		printf("\n Menu: \n");
		printf("1. Insert an Element\n");
		printf("2. Delete an Element\n");
		printf("3. Display\n");
		printf("4. Is Stack Empty?\n");
		printf("5. Is Stack Full?\n");
		printf("6. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice){
		case 1:
			printf("Enter the Data: ");
			scanf("%d", &data);
			push(data);
			break;
		case 2:
			data = pop();
			printf("Poped data is %d", data);
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
			printf("Quitting");
			exit(0);
		default:
			printf("Invalid Choice! Try again ");
		}
	}

	return 0;
}