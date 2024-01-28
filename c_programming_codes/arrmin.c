#include<stdio.h>
int main(){
    int min,i,arr[5];
    printf("enter values of array");
    i=0;
    while(i<5){
        scanf("%d",&arr[i]);
        i++;
    }
    min=arr[0];
    i=0;
   do{
        if(arr[i]<min){
            min=arr[i];
        }
        i++;
   }
   while(i<5);
   printf("%d",min);
}