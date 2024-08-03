#include <stdio.h>

int main() {
   // Bitwise operators performs operations at bit level.
   int var1=7;
   int var2 =4;
   int var3 = var1 & var2; //Bitwise AND
   printf("%d\n",var3);
    var3 = var1 | var2;  //Bitwise OR
    printf("%d\n",var3);
    var3 = var1 ^ var2;  //Bitwise XOR
    printf("%d\n",var3);
    var3 = ~var1; //Bitwise NOT
    printf("%d\n",var3);
    var3 = var1<<1;//Bitwise left shift
    printf("%d\n",var3);
     var3 = var1>>1; //Bitwise right shift
    printf("%d\n",var3);

    return 0;
}
