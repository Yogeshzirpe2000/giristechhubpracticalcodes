#include<stdio.h>
int main(){
    int i,j,arr[5],min;
    printf("Enter the values of array\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    min=arr[4];
    for(i=0;i<5;i++){
        for(j=arr[i]+1;j<arr[i+1];j++){
            if(j<min){
                min=j;
            }
            
        }

    }
    printf("%d",min);
    
}