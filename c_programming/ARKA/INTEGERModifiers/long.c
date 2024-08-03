#include<stdio.h>
#include<limits.h>
int main(){
     long int var1 =LONG_MIN;
     long int var2 =LONG_MAX;
     printf("%d\n",sizeof(long int));
     printf("%ld %ld", var1, var2);   // %d->signed %u->unsigned   signed long->%ld   unsigned long->%lu
    return 0;
}

