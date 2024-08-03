#include<stdio.h>
#include<limits.h>
int main(){
 unsigned  int var1 = 0; 
 unsigned  int var2 =  UINT_MAX;   //Data type tells How much space a variable is going to occupy in the memory 
 printf("%d\n", sizeof( int)); // size of  integer my machine can store => 4 bytes = 4*8 = 32 bits
 printf("%u  %u",var1,var2);  // 0  to (2^32)-1

    return 0;
}
