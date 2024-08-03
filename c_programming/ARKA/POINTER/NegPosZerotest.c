// 1. Write a program to test whether a number is positive, negative or equal to zero using pointer. 
#include<stdio.h>
int main(){
    int n,*ptr;
    printf("Enter the value of n: ");
    scanf("%d",&n);  
    ptr =&n;
    if(*ptr>0) printf("Positive number");
    else if(*ptr<0) printf("Negative number");
    else printf("Number is zero");

    return 0;
}
