#include<stdio.h>
int main(){
    int i,j,count=0,arr[3][3],diff;
    int len=sizeof(arr)/sizeof(arr[0][0]);
    int mid=len/2;
    printf("%d",mid);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
          if(arr[i][j]==0){
            count++;
          }  
        }
    }
    if(count>mid){
        printf("\nsparce");
    }
    else{
        diff=mid+1-count;
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(diff>0){
            arr[i][j]=0;
            diff--;
            }
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }

}