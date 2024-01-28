#include<stdio.h>
int main(){
    int arr[5];
    int i,mid,len,end;
    len=sizeof(arr)/sizeof(arr[0]);
    mid=len/2;
    end=len-1;
     printf("Enter values of array\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nBefore swap\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }

    for(i=0;i<mid;i++){
        for(int j=mid+1;j<=end;j++){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    printf("\nAfter swap\n");
    for(i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
}