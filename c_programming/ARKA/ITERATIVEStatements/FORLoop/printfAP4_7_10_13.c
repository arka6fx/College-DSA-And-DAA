#include <stdio.h>

int main() {
    int n,i;
    printf("Enter the term number upto which you want to print the series: ");
    scanf("%d",&n);
    int a=4;
    for(i=1;i<=n;i++){         //an=4+(n-1)3=3n+1  for(i=4;i<=3n+1;i=i+3)
        printf("%d ",a);
        a+=3;
    }
    
    return 0;
}
