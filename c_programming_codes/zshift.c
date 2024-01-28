#include<stdio.h>
int main(){
    int arr[5]={5,4,3,2,1};
   int arr2[5]={6,7,8,9,10};
    int a[5],a2[5];
    for(int i=0;i<5;i++){
        a[i]=arr2[i];
        a2[i+1]=arr[i];
    }
    a2[0]=arr[5-1];
    for(int i=0;i<5;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");

    for(int i=0;i<5;i++){
        printf("%d\t",a2[i]);
    }
    
}