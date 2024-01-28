#include<stdio.h>
int main(){
    int i,j,arr[5],a[5];
    printf("enter values of array");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        a[i]=arr[i];
    }
    printf("first array is:\n");
    for(i=0;i<5;i++){
        printf("arr[%d]--------->%d\n",i,arr[i]);
    }
    printf("second array is:\n");
    for(i=0;i<5;i++){
        printf("a[%d]------------>\n",i,a[i]);
    }
}