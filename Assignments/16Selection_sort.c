#include<stdio.h>
void main(){
    int N,i,j,min,temp;
    printf("Enter the size of array: ");
    scanf("%d",&N);
    int arr[N];
    printf("\nEnter the elements of the array: \n");
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for ( i = 1; i <=N-1; i++){   
          min=i-1;
          for ( j = i; j < N; j++){
            if (arr[j]<arr[min]){
               min=j;
            }  
          }
          if (min!=i-1){
            temp=arr[i-1];
            arr[i-1]= arr[min];
            arr[min]=temp;
          }          
    }
    printf("\nThe sorted array is: \n");
    for(i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    
}