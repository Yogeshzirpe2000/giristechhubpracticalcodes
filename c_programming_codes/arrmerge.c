#include<stdio.h>
int main(){
    int arr1[5],arr2[4],arr3[9];
    int i,k=0;
    printf("Enter elements of array 1");
    for(i=0;i<5;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter elements of array 2");
    for(i=0;i<4;i++){
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<5;i++){
        arr3[i]=arr1[i];
        k++;
    }
    for(i=0;i<4;i++){
        arr3[k]=arr2[i];
        k++;
    }
    for(i=0;i<9;i++){
        printf("\t%d",arr3[i]);
    }
}
   