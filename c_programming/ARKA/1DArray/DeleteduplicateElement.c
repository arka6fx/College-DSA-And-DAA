#include<stdio.h>
int main(){
    int k,i,j,n,a[50];
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for ( k = 0; k <n; k++)
    {
        scanf("%d",&a[k]);
    }
    for ( i = 0; i <n; i++){
       for ( j = i+1;j<n; j++)
       {
         if(a[i] == a[j]){
            for( k = j;k <=n-2; k++){
              a[k]=a[k+1];
            }
            n--;
            j--;//firse usi purane position ko ham check karenge jab taj dono alag na ho jaye
        }
       }
       printf("%d",a[i]);
       
    }

    
    
    return 0;
}