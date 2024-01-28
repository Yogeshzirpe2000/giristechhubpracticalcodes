#include<stdio.h>
int main(){
    int i,j,arr[3][3],arr2[3][3],arr3[3][3];
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
    printf("First matrix element is :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("Second matrix element is :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
    printf("Result  matrix element is :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            arr3[i][j]=arr[i][j]+arr2[i][j];
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
    
}