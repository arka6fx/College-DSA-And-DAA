#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 50
char stack[MAX];
int top = -1;

void push(char ch){
	if(top == MAX-1){
		printf("Stack Overflow");
		exit(1);
	}
	else{
		stack[++top]=ch;
	}
}

char pop(){
	if(top == -1){
		printf("Stack Underflow");
		exit(1);
	}
	else{
		return stack[top--];
	}
}

int isoperator(char ch){
	return (ch== '+'||ch== '-'||ch== '/'||ch== '%'||ch== '^'||ch== '*');
	
}

int precedence (char ch){
	if(ch== "^") return 3;
	else if(ch== '/'||ch== '%'||ch== '*') return 2;
	else if(ch== '+'||ch== '-') return 1;
	else return 0;
}

void infixToPostfix(char infix[],char postfix[]){
	int i,j=0;
	char ch;
	for(i=0; infix[i]!='\0';i++){
		//operand
		if(isalnum(infix[i])){
		   postfix[j]=infix[i];
		   j++;	
		}
		//'('
		else if(infix[i]=='('){
			push(infix[i]);
		}
		//')'
		else if(infix[i]==')'){
		    while( top!=-1 && stack[top] !='(' ){
			   postfix[j]=pop();
			   j++;
		    }
		    pop();
		}
		
		//operator
		else if( isoperator(infix[i])){
			while(top!=-1 && precedence(stack[top])>=precedence(infix[i])){
				postfix[j] = pop();
				j++;
			}
			push(infix[i]);
		}
		
	}
		while(top!=-1){
        postfix[j] = pop();
		j++;
	    }	
	    
	    postfix[j]='\0';
		
}

int main(){
	char infix[MAX],postfix[MAX];
	printf("Enter Infix String: ");
	scanf("%s",infix);
	infixToPostfix(infix,postfix);
	printf("Postfix Expression is: %s",postfix);
	return 0;
}