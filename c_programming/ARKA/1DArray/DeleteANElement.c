// Write a program in C to delete an element at a specified position in an array.
#include<stdio.h>
#define N 100
int main(){
    int arr[N],n,p,q,s,i;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the elements of the array : ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position where the element is to be deleted : ");
    scanf("%d" , &p);
    q=p-1;
   
    for( i=q; i<=n-2; i++){
       arr[i] = arr[i+1];
    }

    n--;
    printf("The new array after deleting number : \n");
     for ( i = 0; i <=n-1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}