#include<stdio.h>
int main(){
    int arr[5],i;
    int index=2,value=100;
    printf("Enter the values of array\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("before adding\n");
    for(i=0;i<5;i++){
        printf("%d",arr[i]);
    }
     for(i=4;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=value;

    printf("after adding\n");
    for(i=0;i<5;i++){
        printf("%d",arr[i]);
    }
}   