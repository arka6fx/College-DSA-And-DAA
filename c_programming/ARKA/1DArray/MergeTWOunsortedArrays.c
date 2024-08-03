//   Write a program in C to merge two unsorted arrays.
#include<stdio.h>
void mergeArrays(int arr1[],int arr2[],int size1,int size2,int mergedArray[]){
    int i,j;
    for ( i = 0; i <size1; i++){
        mergedArray[i] = arr1[i];
    }
    for (j  = 0; j <size2; j++){
       mergedArray[size1+j] = arr2[j];
    }
    
    
}
int main(){
    int i;
    int arr1[] = {5, 8, 3, 12};
    int arr2[] = {7, 2, 9, 4, 11};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    int mergedArray[size1+size2];
    mergeArrays(arr1,arr2,size1,size2,mergedArray);
    printf("The merged array is: ");
    for ( i = 0; i <size1+size2; i++){
        printf("%d ",mergedArray[i]);
    }
    
   
    return 0;
}