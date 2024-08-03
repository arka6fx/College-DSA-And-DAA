// 1. Write a C program to read elements in an array and find the sum and product of array elements.
#include<stdio.h>
int main(){
    int n,sum=0,product=1;
    int arr[50];
    printf("Enter the size of array: ");
    scanf("%d",&n);
    
    for (int i = 0; i <n; i++)
    {
       scanf("%d",&arr[i]);
       sum = sum+arr[i];
       product=product*arr[i];
    }
    printf("The sum of array elements = %d\n",sum);
    printf("The product of array elements = %d",product);

    
    return 0;
}