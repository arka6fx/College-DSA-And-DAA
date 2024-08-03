#include<stdio.h>
#include<limits.h>
int main(){
    unsigned  char ch1 = 0;
    unsigned  char  ch2 = UCHAR_MAX;
    printf("%d\n", sizeof(char));//1Byte = 8 bits
    printf("%u  %u\n",ch1 ,ch2); // 0 to (2^8)-1  => 0 to 255
    printf("%c  %c",ch1, ch2);  
    return 0;
}

