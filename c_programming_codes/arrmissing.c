#include<stdio.h>
int main(){
    int arr[5];
    int i,j,count;
     printf("Enter values of array\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        count=arr[i];
        for(j=arr[i]+1;j<arr[i+1];j++){
                ++count;
                printf("%d\t",count);
        }
    }
}//1 5 7 9 11