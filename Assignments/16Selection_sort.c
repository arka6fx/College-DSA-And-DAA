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
    for ( i = 0; i <N-1; i++){   
          min=i;
          for ( j = i+1; j < N; j++){
            if (arr[j]<arr[min]){
               min=j;
            }  
          }
          if (min!=i){
            temp=arr[i];
            arr[i]= arr[min];
            arr[min]=temp;
          }          
    }
    printf("\nThe sorted array is: \n");
    for(i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    
}