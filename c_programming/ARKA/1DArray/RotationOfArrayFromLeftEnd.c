// 10. Write a program in C to rotate an array by N positions. :
// The given array is : 0 3 6 9 12 14 18 20 22 25 27
// From 4th position the values of the array are : 12 14 18 20 22 25 27
// Before 4th position the values of the array are : 0 3 6 9
// After rotating from 4th position the array is:
//12 14 18 20 22 25 27 0 3 6 9
#include<stdio.h>
void reverse(int x[],int sidx,int eidx){
 for (int i =sidx,j=eidx; i <j; i++,j--){
    int temp = x[i];
    x[i] = x[j];
    x[j] = temp;
} 
 
}
int main(){
    int arr[11]={0, 3, 6, 9, 12, 14, 18, 20, 22, 25, 27};
    int k,i;
    printf("Enter the position by which you want to rotate the array: ");
    scanf("%d",&k);
    k = k%11;
    reverse(arr,0,k-1);
    reverse(arr,k,11-1);
    reverse(arr,0,11-1);
    for ( i = 0; i <=10; i++){
        printf("%d ", arr[i]);
    }

}
