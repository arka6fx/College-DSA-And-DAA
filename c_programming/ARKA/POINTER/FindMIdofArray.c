#include<stdio.h>
int *findMid(int arr[],int size){ // data type of this function is int * i.e function is returing some address or pointer
    return &arr[size/2];          //returning pointer is equivalent to returning address of some integer
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int *Mid = findMid(arr,size);
    printf("%d ",*Mid);

 

    return 0;
}