#include <stdio.h>
int main()
{
    int a;
    printf("Enter a value : ");
    scanf("%d", &a);
    if (a % 5 == 0){
        if (a % 3 == 0){
            printf("%d is divisible by 3 and 5", a);
        }
        else{
            printf("%d is not divisible by 3 ", a);
        }
    }
    else {  printf("%d is not divisible by 3 and 5", a);
    }  
    return 0;
}