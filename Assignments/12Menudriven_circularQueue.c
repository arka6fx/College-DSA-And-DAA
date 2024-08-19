#include<stdio.h>
#define MAX 5
int queue[MAX];
int rear=-1;
int front=-1;

void enqueue(int val){
    if(((rear+1)%MAX) == front){
        printf("Overflow");
        return;
    }
    else if (rear == -1 && front == -1){
        rear = front = 0;
    }
    else{
        rear=(rear+1)%MAX;
    }
    queue[rear]=val;
}

void dequeue(){
    if (rear == -1 && front == -1){
        printf("Underflow");
        return;
    }
    else if (rear == front){
        printf("The dequeued element is %d",queue[front]);
        rear=front=-1;
     }
     else{
        printf("The dequeued element is %d",queue[front]);
        front=(front+1)%MAX;
     }
}

void display(){
    int i=front;
  if (rear == -1 && front == -1){
        printf("Underflow");
        return;
    }
     printf("Your Circular Queue elements are: \n");    
    while(i!=rear){
        printf("%d ",queue[i]);
        i=(i+1)%MAX;
    }
    printf("%d ",queue[rear]);
   
    
}
int main(){
	int choice,val;
	while(1){
		printf("\nMenu: \n");
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Display\n");
		printf("4.Exit\n");
		printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: printf("Enter the value to insert:");
                    scanf("%d",&val);
                    enqueue(val);
                    break;
            case 2: dequeue();
                    break;
            case 3: display();
                    break;
            case 4: printf("Exiting...");
                    return 0;
           default: printf("\nEnter Valid input!");
            
        }
        

		
	}
	return 0;
}


