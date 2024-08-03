//  Write a C program to input elements in array and count frequency of every element and print all unique elements in array.
#include<stdio.h>
#define MAX_SIZE 100
int main(){
    int arr[MAX_SIZE],freq[MAX_SIZE],i,j,count;
    int n;
    printf("Enter the size/length of array: ");
    scanf("%d",&n);
    printf("Enter the elemets of the array: ");
    for ( i = 0; i <n; i++){
       scanf("%d",&arr[i]);
       freq[i]=-1;
    }
    for (i = 0; i <n; i++){
        count =1;
        for (j = i+1; j<n; j++)
        {
            if(arr[i]==arr[j]){
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0){
            freq[i]=count;
        }
    }
    // printf("Unique elements in the array are: ");
    // for ( i = 0; i <n; i++){
    //     if(freq[i]==1){
    //         printf("%d ",arr[i]);
    //     }
    // }
    printf("\n");
    printf("Frequencies of all elements:\n");
    for ( i = 0; i <n; i++){
        if(freq[i]!=0){
            printf("%d occurs %d times\n",arr[i],freq[i]);
        }
    }
    
 

    return 0;
}