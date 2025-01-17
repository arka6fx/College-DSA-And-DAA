#include <stdio.h>

int main()
{
   int arr[50],crr[50],n,i,j,cnt;
   printf("Enter the no. of Elements: ");
   scanf("%d",&n);
   printf("Enter the Elements: ");
   for(i=0;i<n;i++){
      scanf("%d", &arr[i]);
   }
   
   for(i=0;i<n;i++){
       cnt=1;
       if(arr[i]!=-1){
           for(j=i+1;j<n;j++){
               if(arr[i]==arr[j]){
                   arr[j]=-1;
                   cnt++;
               }
           }
       }
       crr[i]=cnt;
   }
   
   for(i=0;i<n;i++){
       if(arr[i]!=-1){
           printf("Frequency of %d is %d\n",arr[i],crr[i]);
       }
   }
   
    printf("\nDuplicate elements: \n");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != -1 && crr[i] > 1)
        {
            printf("%d->%d\n", arr[i], crr[i]);
        }
    }
    printf("Unique elements: \n");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != -1 && crr[i] == 1)
        {
            printf("%d->%d\n", arr[i], crr[i]);
        }
    }

   return 0;
}