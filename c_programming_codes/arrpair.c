#include<stdio.h>
int main(){
    int i,j,arr[5],sum=7;
    printf("\nenter elments of array");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(arr[i]+arr[j]==sum){
                printf("\n%d and %d =%d",arr[i],arr[j],sum);
            }
        }
    }
}