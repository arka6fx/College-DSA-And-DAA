#include<stdio.h>
#define MAX 5
int queue[MAX];
int st1[MAX];
int st2[MAX];
int top1=-1;
int top2=-1;
int count =0;
void push1(int val){
	if (top1=MAX-1){
		return;
	}
	else{
		st1[++top1]=val;
	}
}
void push2(int val){
	if (top2=MAX-1){
		return;
	}
	else{
		st1[++top2]=val;
	}
}
int pop1(){
	return  st1[top1--];
}
int pop2(){
	return st2[top2--];
}
void enqueue(int val){
	push1(val);
	count++;	
}
void dequeue(){
	int a,b,i;
	for(i=0;i<=count;i++){
		a=pop1();
		push2(a);
	}
	printf("The dequeued element is %d",st2[top2]);
	pop2();
	count--;
	for(i=0;i<=count;i++){
		b = pop2();
		push1(b);
	}
	
	
}
void display(){
	int i;
		if(top1==-1 && top2==-1){
		printf("Underflow");
		
     	}
     	printf("Your  queue is: ");
     	for(i=0;i<=top1;i++){
     		printf("%d ",st1[i]);
     	}
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
