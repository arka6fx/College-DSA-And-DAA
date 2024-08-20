#include<stdio.h>
#define MAX 5
int queue[MAX];
int rear =-1;
int front = -1;

void enqueue(int val){
	if(((rear+1)%MAX) == front){
		printf("Overflow");
		return;
	}
	else if(rear==-1 && front==-1){
		rear=front=0;
	}
	else{
		rear=(rear+1)%MAX;
	}
	queue[rear]=val;
}

void dequeue(){
	
	if(rear==-1 && front==-1){
		printf("Underflow");
		
	}
	else if (rear == front){
		printf("\nThe dequeued element is %d",queue[front]);
		rear=front=-1;
	}
	else{
		printf("The dequeued element is %d",queue[front]);
	    front=(front+1)%MAX;
	}
	
}

display(){
	
	int i=front;
	int v,j;
	int count=0;
	if(rear==-1 && front==-1){
		printf("Underflow");
		return;
	}
	
	while(i!=rear){
		count++;
		i=(i+1)%MAX;
	}
	v= count+1;
	i=front;
	printf("Your Circular queue is: ");
	for(j=0;j<5-v;j++){
		printf("* ");
	}
	while( i!=rear){
		printf("%d ",queue[i] );
		i=(i+1)%MAX ;
		
	}
	printf("%d ",queue[rear] );
}
int main(){
	int val,choice;
	
	while(1){
		 printf("\nMenu:\n");
	     printf("1.Insert\n");
	     printf("2.Delete\n");
	     printf("3.Display\n");
	     printf("4.Exit\n");
	     printf("Enter your choice: \n");
	     scanf("%d",&choice);
	     switch(choice){
	     
		case 1: printf("Enter the value you want to enqueue: \n");
		        scanf("%d",&val);
		        enqueue(val);
		        break;
		case 2: dequeue();
	        	break; 
		case 3: display();
		        break;
		case 4: return 0;
		default: printf("Enter valid choice ");
		         break;}
						       
	
	}
	return 0;
}
