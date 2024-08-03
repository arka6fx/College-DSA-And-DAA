#include<stdio.h>
#include<limits.h>
int main(){
    char ch1 = CHAR_MIN;
    char  ch2 = CHAR_MAX;
    printf("%d\n", sizeof(char)); //1Byte = 8 bits
    printf("%d  %d\n",ch1 ,ch2); // -(2^8/2) to (2^8/2)-1 => -128 to 127
    printf("%c  %c",ch1 ,ch2);
    return 0;
}

