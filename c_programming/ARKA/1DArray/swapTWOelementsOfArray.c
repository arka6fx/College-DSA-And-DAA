//swap elements of the array by passing the entire array
#include<stdio.h>
void swap(int x[]){
    int temp = x[0];
    x[0] = x[1];
    x[1]=temp;
}
int main(){
    int arr[2]={1,2};
    printf("%d %d\n",arr[0],arr[1]);
    swap(arr);//passing the address of the 1st element of the array
    printf("%d %d\n",arr[0],arr[1]);


    return 0;
}
