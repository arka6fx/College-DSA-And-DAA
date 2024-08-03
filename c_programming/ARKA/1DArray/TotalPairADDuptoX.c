//Find total number of pairs whose sum add upto x.
#include<stdio.h>
int main(){
    
    int arr[8] = {1,2,3,4,5,6,7,8};
    int totalPairs = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i+1; j < 8; j++)
        {
           if(arr[i]+arr[j]==12){
            printf("(%d %d)\n",arr[i],arr[j]);
            totalPairs++;
           }
        }
       
    }
     printf("Total pairs = %d",totalPairs);

    return 0;
}