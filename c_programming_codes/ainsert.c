#include<stdio.h>
int main(){
    int arr[5],i;
    int index=2,value=100,len;
    len=sizeof(arr)/sizeof(arr[0]);
    printf("Enter the values of array\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("before insertion\n");
    for(i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
     for(i=index;i<=len-1;i++){
        arr[i]=arr[i+1];
    }
    arr[index]=value;
   

    printf("\nafter insertion\n");
    for(i=0;i<len;i++){
        printf("%d\t",arr[i]);
    }
}   