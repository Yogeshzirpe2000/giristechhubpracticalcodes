#include<stdio.h>
int main(){
    int a[5];
    printf("Enter values of array\n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0],min=a[0];
    for(int i=0;i<5;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("max value of array is ------------>%d\n min value of array is--------->%d",max,min);

    
    }