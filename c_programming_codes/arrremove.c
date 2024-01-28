#include<stdio.h>
int main(){
    int arr[5],i,idx,c;
    printf("Enter elements of array");
    for(i=0;i<5;i++){
        scanf("%d",&arr[5]);
    }
    printf("Enter elements of index you want to delete");
    scanf("%d",&idx);
    c=arr[idx];
    for(i=0;i<5;i++){
        arr[c]==arr[c+1];
    }
    for(i=0;i<5;i++){
        printf("%d",arr[i]);
    }
}   