#include<stdio.h>
int main(){
    int arr[9],i,j,count,temp,len=sizeof(arr)/sizeof(arr[0]);
    printf("enter elements of array");
    for(i=0;i<9;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<9;i++){
        for(j=i+1;j<9;j++){
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
       
    }
   
    count=1;
     for(i=0;i<9;i++){
        if(arr[i]==arr[i+1]){
            ++count;
        }   
        
        if(count>len/2){
            printf("\n majority element is %d",arr[i]);
            count=1;
        }
    }
   
}