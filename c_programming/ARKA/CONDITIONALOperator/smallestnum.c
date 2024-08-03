#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter first number :");
    scanf("%d", &a);
    printf("Enter second number :");
    scanf("%d", &b);
    printf("Enter third number :");
    scanf("%d", &c);
    (a<b && a<c) ? printf("%d is the smallest",a ) : (b<a && b<c) ? printf("%d is the smallest",b ) :printf("%d is the smallest",c );
    return 0;
}   