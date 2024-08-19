#include<stdio.h>
void main(){
    int N,i,j,flag,temp;
    printf("Enter the size of array: ");
    scanf("%d",&N);
    int arr[N];
    printf("\nEnter the elements of the array: \n");
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for ( i = 1; i <=N-1; i++)
    {   temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp) {
            arr[j+1]=arr[j];
            j--;
        }
        j=j+1;
        arr[j]=temp;
    }
    
    printf("\nThe sorted array is: \n");
    for(i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    
}