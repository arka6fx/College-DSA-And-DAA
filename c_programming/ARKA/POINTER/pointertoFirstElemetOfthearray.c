#include<stdio.h>
int main(){
    int a[5];
    *a= 10; // Name of the array can be used as a pointer to the first element of an array.
    *(a+1)=12;  //*(a+i)= a[i]
    printf("%d\n",a[0]);
    printf("%d\n",a[1]);
   

    return 0;
}