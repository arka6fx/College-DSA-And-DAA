#include<stdio.h>
#include<stdbool.h> 
bool check(int x[],int n){  
    bool flag;
    for (int i=0,j=n-1; i<j; i++,j--){ //for loop  collective initialization , condition, collective increment/decrement
       if(x[i]==x[j]) {
        flag = true;
       }
       else{
        flag =false;
        break;
       }
    }
    return flag;
}
int main(){
    int n;
    printf("Enter the size/length of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elemets of the array: ");
    for (int i = 0; i <n; i++){
       scanf("%d",&arr[i]);
    }
    bool flag ;
    flag = check(arr,n);//passing whole array and length of the array as argument
    if(flag == true) printf("Array is palindrome");
    else printf("Array is not a palindrome");
    return 0;
}   