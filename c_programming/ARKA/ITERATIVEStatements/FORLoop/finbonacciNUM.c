#include<stdio.h>

int main(){
    int i,n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    int a = 0;
    int b = 1;
    int sum = 0;
    for (i = 1; i <=n; i++){
       printf("%d ",sum);
       a=b;
       b=sum;
       sum=a+b;
    }
    

    return 0;
}