#include<stdio.h>

int main(){
   int binary;
   printf("Enter the binary number: ");
   scanf("%d",&binary);
   int decimal =0;
   int base=1;
   while(binary!=0){
     int ld = binary%10;
     decimal = decimal+ ld*base;
     base=base*2;
     binary/=10;
   }
  printf("Decimal equivalent of the binary number is %d",decimal);

    return 0;
}