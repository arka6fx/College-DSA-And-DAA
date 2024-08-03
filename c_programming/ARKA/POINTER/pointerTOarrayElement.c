#include<stdio.h>
int main(){
    int a[]={1,2,3,8,5,6};
    int *p =&a[3];
    int *q =&a[5];
    printf("%d\n", p<=q);
    printf("%d\n",*p > *q);
    printf("%d\n", p>=q);
    printf("%d\n",q-p);
    q=&a[3];
    printf("%d\n", p==q);
    printf("%d\n",*q);
    q++;
    printf("%d\n",*q);
    
    return 0;
}