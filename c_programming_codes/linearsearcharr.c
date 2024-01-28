#include<stdio.h>
int main(){
    int arr[5];
    int i,skey,len,flag=0;
    len=sizeof(arr)/sizeof(arr[0]);
    printf("Enter values of array");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter values you want to search");
    scanf("%d",&skey);
    for(i=0;i<len-1;i++){
        if(arr[i]==skey){
            flag=1;
            break;
        }
    }
    if(flag){
        printf("Element is found");
    }
    else{
        printf("Element not fountd");
    }
}