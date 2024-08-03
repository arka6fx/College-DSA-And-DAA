// Write a program in C to calculate C(n, r) using function. 
#include<stdio.h>
int fun(int n,int r);
int fact(int m);
int main(){
    int n,r;
    printf("Enter the value of n and r: ");
    scanf("%d %d",&n,&r);
    int ncr=fun(n,r);
    printf("The value of c(%d,%d) is %d",n,r,ncr);
    
    return 0;
}

int fun(int n,int r){
    int ncr = fact(n)/(fact(n-r)*fact(r));
}
int fact(int m){
    int prod=1;
    for (int i = 1; i <=m; i++)
    {
        prod=prod*i;
    }
    return prod;
}
