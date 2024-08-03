// 3. Write a C program to find largest and second largest element in an array.
#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the size/length of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elemets of the array: ");
    for (int i = 0; i <n; i++){
       scanf("%d",&arr[i]);
      
    }
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i <n; i++)
    {
        if(arr[i]>max){
            smax = max;  //previous max
            max= arr[i];//new max
        }
        else if(arr[i]>smax && max!=arr[i]){ //eg: 1 2 7 7 6 specially if second max is after max and if max number is repeated consecutively
            smax = arr[i];                   //max>=arr[i] condition
        }
    }
    printf("Max = %d\n",max);
    printf("Secondmax = %d",smax);
    
    
 

    return 0;
}