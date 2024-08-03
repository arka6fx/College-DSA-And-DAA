#include<stdio.h>
int main(){
   {
    int var1=45;
    printf("%d\n",var1);
    {
        int var2 =3;
        printf("%d\n",var1);
        printf("%d\n",var2); 
    }
    printf("%d\n",var1); 
    //printf("%d\n",var2);//var2 is destroyed after coming out from inner block. so,it's showing undeclared variable var2
    
   } 
    return 0;
}

