#include <stdio.h>
#include <stdlib.h>
#define N 5
int stack[N];
int top = -1; // indicates stack is empty

void push(int num)
{
    if (top == N - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = num;
    }
}

int pop()
{
    int data;
    if (top == -1)
    {
        printf("Stack Underflow\n");
        exit(1); // means abnormal termination of the program
    }
    else
    {
        data = stack[top];
        top--;
    }
    return data;
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Your stack is:\n");
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("%d \n", stack[i]);
    }
    printf("\n");
}

int main()
{
    int  num, ch;

    while (1)
    {
        printf("Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Please enter your choice: ");

        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the element to be pushed: ");
            scanf("%d", &num);
            push(num);
            break;
        case 2:
            num = pop();
            printf("The popped element is %d.\n", num);
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting...\n");
            exit(1);
        default:
            printf("Wrong choice\n");
        }
    }

    return 0;
}
