#include<stdio.h>
int main(){
    int arr[5],i,j,count,temp;
    printf("enter elements of array");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
       
    }
    for(i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    count=1;
     for(i=0;i<=4;i++){
        if(arr[i]==arr[i+1]){
            ++count;
        }   
        if(arr[i]!=arr[i+1]){
            printf("\n%d is repeated by %d times",arr[i],count);
            count=1;
        }
    }
   
}