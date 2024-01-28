#include<stdio.h>
int main(){
    int i,j,arr[3][3];
    printf("Enter array elements \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d\t",&arr[i][j]);
        }
        printf("\n");
    }
    printf("Before Transpose\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");

    }
    
    printf("After  Transpose\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",arr[j][i]);
        }
        printf("\n");

    }

}