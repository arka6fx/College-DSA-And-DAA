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
    {   flag=0;
        for ( j = 1; j <=N-i; j++)
        {
            if (arr[j-1]>arr[j])
            {
                temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
                flag=1;
            }    
        }
        if (flag==0)
        {
           break;
        }   
    }
    
    printf("\nThe sorted array is: \n");
    for(i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    
}