#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* link;
};
struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int val){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->link= NULL;
    if(newNode==NULL){
        printf("Overflow");
        
    }
    else if(  front==NULL && rear==NULL){       
        front=rear=newNode;
    }
    else{
        rear->link=newNode;
        rear=newNode;
    }
}

int dequeue(){
    struct node* temp;
    if(front==NULL && rear==NULL){
        printf("Underflow");
    }
    if(rear==front){
        temp=front;
        front=rear=NULL;
        free(temp);
    }
    else{
        temp=front;
        front=front->link;
        free(temp);

    }
}

void display(){
    struct node* temp;
    if(front==NULL && rear==NULL){
        printf("Underflow");
    }
    temp=front;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->link;
    }

}
int main()
{
   int choice, val;
   while (1)
   {
      printf("\nMenu: \n");
      printf("1.Insert\n");
      printf("2.Delete\n");
      printf("3.Display\n");
      printf("4.Exit\n");
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
         printf("Exiting...");
         exit(0);//successful termination
      default:
         printf("\nEnter Valid input!");
      }
   }
   return 0;
}