#include<stdio.h>
#include<limits.h>
int main(){
 signed short int var1 = SHRT_MIN;  //signed is bydefault
 signed short int var2 = SHRT_MAX;   //Data type tells How much space a variable is going to occupy in the memory 
 printf("%d\n", sizeof(short int)); // size of short integer my machine can store => 2 bytes = 2*8 = 16 bits
 printf("%d  %d",var1,var2);  // - (2^2*8)/2  to ((2^2*8)/2)-1 

    return 0;
}
