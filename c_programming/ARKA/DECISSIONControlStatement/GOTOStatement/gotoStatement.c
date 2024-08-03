#include <stdio.h>

int main() {
     printf("one\n");
     goto label;//unconditional branching(jump statement)
     printf("two\n");
     printf("three\n");
     label:
     printf("four\n");
     

    return 0;
}