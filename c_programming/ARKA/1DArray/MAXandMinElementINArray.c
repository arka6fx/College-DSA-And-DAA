// 2. Write a C program to input elements in an array from user, find maximum and minimum element in array.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size/length of array: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i <n; i++)
    {
       scanf("%d",&arr[i]);
      
    }
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i <n; i++){
      
       if(max<arr[i]) max =arr[i];
       if(min>arr[i]) min = arr[i];
    }
    printf("Max element in the array = %d\n",max);
    printf("Min element in the array = %d",min);
    
    return 0;
}