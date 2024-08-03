// 4. Write a C program to input elements in array from user and count even and odd elements in array.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size/length of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elemets of the array: ");
    for (int i = 0; i <n; i++){
       scanf("%d",&arr[i]);
    }
    int countOdd = 0;
    int countEven = 0;
    for (int i = 0; i < n; i++)
    {
       if(arr[i]%2==0) countEven++;
       else countOdd++;
    }
    printf("Even numbers = %d\n",countEven);
    printf("Odd numbers = %d",countOdd);
    return 0;
}    