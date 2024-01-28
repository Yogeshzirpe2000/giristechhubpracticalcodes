#include<stdio.h>
int main()
{
    int a[5];
    printf("Enter vlaues of array");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++){
        printf("a[%d]------>%d\n",i,a[i]);
    }
}