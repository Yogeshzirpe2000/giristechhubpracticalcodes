#include<stdio.h>
int main(){
    int i,j,arr[5],diff;
    printf("Enter the values of array\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter difference you want in pair\n");
    scanf("%d",&diff);
    for(i=0;i<5;i++){
        for(j=i;j<5;j++){
            if(arr[i]-arr[j]==diff ||arr[i]-arr[j]==-diff){
                printf("%d\tand\t%d has differece of %d\n",arr[i],arr[j],diff);
            }
        }
    }
}