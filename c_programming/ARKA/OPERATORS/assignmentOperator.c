#include <stdio.h>

int main() {
    int var = 15;
    var+=2;
    printf("%d\n",var);
    var*=3;
    printf("%d\n",var);
    var/=3;
    printf("%d\n",var);
    var%=4;
    printf("%d\n",var);
    var&=5; 
    printf("%d\n",var);
    var|=3;
    printf("%d\n",var);
    var^=4; // var= var^4
    printf("%d",var);
    return 0;
}
