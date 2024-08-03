#include <stdio.h>

int main() {
    int x = 65;
    char ch = x; //type conversion of variable X from int to char(implicitly)    low data type => high data type
    printf("%c", ch);
    
    return 0;
}
