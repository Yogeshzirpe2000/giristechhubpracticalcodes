#include<stdio.h>
void highest(int arr[5],int key,int len){
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=arr[i];
            }
        }
    }
    // for(int i=0;i<len;i++){
    //     for(int j=i+1;j<len;j++){
    //         if(arr[i]==arr[j]){
    //             for(int k=j;k<5;k++){
    //                 arr[k]=arr[k+1];
    //             }
    //             len--;
    //         }
    //     }
    // }
    for(int i=0;i<len;i++){
        printf("%d",arr[i]);
    }
    //printf("%d",arr[key-1]);
}
int main(){
    int arr[5],key;
    printf("enter elements of array\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the key value\n");
    scanf("%d",&key);
        int len=sizeof(arr)/sizeof(arr[0]);

    highest(arr,key,len);
return 0;
}