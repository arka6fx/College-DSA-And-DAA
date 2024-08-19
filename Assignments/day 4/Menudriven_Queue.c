#include<stdio.h>
#define MAX 5
int queue[MAX];
int rear=-1;
int front=-1;

void enqueue(int val){
     if(rear == MAX-1){
        printf("Overflow");
        return;
     }
     else if (rear == -1 && front == -1){
        rear = front = 0;
     }
     else{
      rear++;
     }
     queue[rear]=val;
}

void dequeue(){
      if (rear == -1 && front ==-1){
        printf("Underflow");
        return;
     }
     else if (rear == front){
        rear=front=-1;
     }
     else{
        printf("The dequeued element is %d",queue[front]);
        front++;
     }
}

void display(){
  int i;
   if (rear == -1 && front ==-1){
        printf("Underflow");
        return;
     }
    printf("Your Queue elements are: \n");    
     for ( i = front; i < rear+1; i++){
        printf("%d ",queue[i]);
     }
     
   
    
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


