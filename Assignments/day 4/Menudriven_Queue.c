#include<stdio.h>
#define N 5
int queue[N];
int rear=-1;
int front=-1;

void enqueue(int num){
     if(rear == N-1){
        printf("Overflow");
     }
     else {
        if(front==-1) front=0;
        rear++;  
        queue[rear]=num;
    
    }
}

void dequeue(){
       if(front==-1){
         printf("Underflow");
       }
       else{
         printf("The dequeued element is %d",queue[front]);
         front++;
         if(front>rear) {
            front = rear  = - 1;
         }
       }
}

void display(){
    int i;
    if(front==-1){
       printf("Underflow");
       }
    else{
        for ( i = front; i < rear+1; i++){
        printf("%d ",queue[i]);
    }

    }
   
    
}
int main(){
	int choice,num;
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
                    scanf("%d",&num);
                    enqueue(num);
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


