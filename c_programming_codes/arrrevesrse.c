#include<stdio.h>
int main(){
    int arr[5];
    int i,mid,len;
    len=sizeof(a)/sizeof(arr[0]);
    mid=len/2;
     printf("Enter values of array\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("Before swap%d\t",arr[i]);
    }

    for(i=0;i<mid;i++){
        for(int j=mid+1;j<5;j++){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    for(i=0;i<5;i++){
        printf("after swap%d\t",arr[i]);
    }
}