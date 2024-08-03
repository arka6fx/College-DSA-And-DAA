#include <stdio.h>
int main()
{
    int Arka, Neha, Adrika ;
    printf("Enter age of Arka : ");
    scanf("%d" , &Arka);
     printf("Enter age of Neha : ");
    scanf("%d" , &Neha);
     printf("Enter age of Adrika : ");
    scanf("%d" , &Adrika);
    if (Arka<Neha && Arka<Adrika){
        printf("Arka is the youngest.");
    }
    else if (Neha<Arka && Neha<Adrika){
        printf(" Neha is the youngest.");
    }
    else{
        printf("Adrika is the youngest.");
    }
    
    return 0;
}