#include<stdio.h>
int main(){
    int arr[5],i,j,mid,len,flag=0;
    len=sizeof(arr)/sizeof(arr[0]);
    mid=len/2;
    printf("enter elements of array");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    for(i=1;i<mid;i++){
        if(arr[mid-i]!=arr[mid+i]){
            flag=1;   
        }
        
    }

    if(flag==1){
        printf("\nArray is not palindrom");
    
    }
    else{
        printf("\nArray is palindrom");
    }
}