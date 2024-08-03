// Write a program in C to insert an element at a specified position in an array.
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
    printf("Enter the position where you want to insert the element: ");
    scanf("%d",&p);
    q=p-1;
    for ( i = n-1; i>=q; i--)
    {
        arr[i+1]=arr[i];
    }
    printf("Enter the new element you want to insert in the array : ");
    scanf("%d",&s);
    arr[q]= s;
    n++;
    for ( i = 0; i <=n-1; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}    