// Write a C program to swap two numbers using function.
#include<stdio.h>
void swap(int *m, int *n);
int main(){
    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a,&b);
    printf("The Value of a = %d and b = %d before swapping\n",a,b);
    swap(&a,&b);//pass by reference //passing address
    printf("The Value of a = %d and b = %d after swapping",a,b);
    return 0;
}
void swap(int *m, int *n){
    int c = *m;
    *m = *n;
    *n = c;
}