#include<stdio.h>
void reverse(int x[],int si,int ei){  
    for (int i=si,j=ei; i<j; i++,j--){ //for loop  collective initialization , condition, collective increment/decrement
       int temp = x[i];
        x[i]=x[j];
        x[j]=temp;
    }
}
int main(){
    int n,k;
    printf("Enter the size/length of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elemets of the array: ");
    for (int i = 0; i <n; i++){
       scanf("%d",&arr[i]);           //1 2 3 4 5 n=5
    }
    printf("Enter the value of k: ");
    scanf("%d",&k);
    k = k % n;                        
    reverse(arr,0,n-1);//reversing whole array  5 4 3 2 1 //passing array as well as starting and ending index
    reverse(arr,0,k-1);//reversing first part of array  3 4 5 2 1
    reverse(arr,k,n-1);//reversing second part of array 3 4 5 1 2
    for (int i = 0; i <n; i++){
       printf("%d ",arr[i]);
    }
    return 0;
}   