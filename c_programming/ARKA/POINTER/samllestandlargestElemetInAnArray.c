#include<stdio.h>
void findMinMax(int a[],int *min,int *max,int size){
    *min = *max = a[0];
    for (int i = 0; i <size; i++){
       if(a[i]>*max) *max =a[i];
       if(a[i]<*min) *min=a[i]; 
    }
    
}
int main(){
    int a[]={2,3,4,5,6,9,10};
    int size = sizeof(a)/sizeof(a[0]);
    int max,min;
    findMinMax(a,&min,&max,size);
    printf("Maximum element = %d Minimum element = %d",max,min);

    return 0;
}