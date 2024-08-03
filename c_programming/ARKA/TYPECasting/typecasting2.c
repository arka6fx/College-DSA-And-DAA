#include <stdio.h>

int main() {
    float x = (float)3/4; //type casting of 3/4 from int to float 
    printf("%f", x);
    int t=65;
    char ch = (char)t; // type casting of variable X from int to char( forcedfully/explicitly) high data type => low data type
    printf("%c",ch);
    return 0;
}
