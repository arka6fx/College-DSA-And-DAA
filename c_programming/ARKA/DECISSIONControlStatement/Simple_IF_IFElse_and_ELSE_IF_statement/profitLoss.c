#include <stdio.h>
int main (){
    
    int sp,cp;
    printf("Input Selling price: ");
    scanf("%d",&sp);
    printf("Input Cost price: ");
    scanf("%d",&cp);
    int profit,loss;
    if (sp>cp) {
      int Profit = sp - cp;
      printf("The seller has made a profit of %d", profit);
        
    }
    else if (sp<cp) {
      int loss = cp - sp;
      printf("The seller has made a loss of %d", loss);
        
    }
    else if (sp==cp) {
      
      printf("The seller has made neither profit nor loss");
        
    }
    
    return 0;
} 