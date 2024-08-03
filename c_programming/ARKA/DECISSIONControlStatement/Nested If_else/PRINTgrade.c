#include <stdio.h>
int main(){
        int marks;
        printf("Input your marks: ");
        scanf("%d", &marks);
        if (marks > 80){
            printf("A Grade");
        }
        else{
            if (marks > 60){
                printf("B Grade");
            }
            else{
                if (marks > 40){
                    printf("c Grade");
                }
                else{
                    printf("D Grade");
                }
            }
        }
     return 0; 
}
 

