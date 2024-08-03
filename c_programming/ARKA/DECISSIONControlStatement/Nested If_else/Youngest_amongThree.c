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
    if (Arka<Neha){
        if(Arka<Adrika){
        printf("Arka is the youngest");  
        }
        else{ //Adrika<Arka<Neha
          printf("Adrika is the youngest");  
        }
    }
    else {
        if(Neha<Adrika){
        printf("Neha is the youngest");   
        }
        else{//Adrika<Neha<Arka
          printf("Adrika is the youngest");  
        }
    } 
    
    return 0;
}