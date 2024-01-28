#include<stdio.h>
#include "digitcount.h"

int main(){
    int num;
    printf("enter number\n");
    scanf("%d",&num);
    int result=digitcount(num);
    printf("%d",result);
return 0;
}