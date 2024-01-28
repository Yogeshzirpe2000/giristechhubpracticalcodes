#include<stdio.h>
int main(){
    int arr[5],i,key;
    int len=sizeof(arr)/sizeof(arr[0]);
    int mid,start=0,end=len-1,flag=0;
    printf("Enter the values of array\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter key number you want to search\n");
    scanf("%d",&key);
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==key){
           
           printf("%d",mid);
           break;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }

}