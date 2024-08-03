#include<stdio.h>
// void swap(int x[],int n){
//     int i=0;
//     int j=n-1;
//     while(i<j){
//         int temp = x[i];
//         x[i]=x[j];
//         x[j]=temp;
//         i++;
//         j--;
//     }
// }
void swap(int x[],int n){  
    for (int i=0,j=n-1; i<j; i++,j--){ //for loop  collective initialization , condition, collective increment/decrement
       int temp = x[i];
        x[i]=x[j];
        x[j]=temp;
    }
}
int main(){
    int n;
     int arr[100];
    printf("Enter the size/length of array: ");
    scanf("%d",&n);
   
    printf("Enter the elemets of the array: ");
    for (int i = 0; i <n; i++){
       scanf("%d",&arr[i]);
    }
    swap(arr,n);//passing whole array and length of the array as argument
    for (int i = 0; i <n; i++){
       printf("%d ",arr[i]);
    }
    return 0;
}   