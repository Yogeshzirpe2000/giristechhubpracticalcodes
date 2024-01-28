#include<stdio.h>
int main(){
    int i,j,k,arr[3][3],arr2[3][3],arr3[3][3];
    printf("Enter first matrix element\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter second matrix element\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d\t",&arr2[i][j]);
        }
    }
    printf("first matrix element\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("second matrix element\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            arr3[i][j]=0;
           for(k=0;k<3;k++){
                arr3[i][j]=arr3[i][j]+arr[i][k]*arr2[k][j];
           }
        }
    }
    printf("Resultant matrix is\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
}