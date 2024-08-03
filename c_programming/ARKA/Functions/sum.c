// Write a C Program to calculate the Sum of two integers using a function
// where the numbers should be passed to function as parameter and the sum
// should be returned to the main function to print the sum at main function.
#include<stdio.h>
int add(int a,int b);
int main(){
    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a,&b);
    int sum = add(a,b);
    printf("sum = %d",sum);
    
    return 0;
}

int add(int a,int b){
    return (a+b) ;
}