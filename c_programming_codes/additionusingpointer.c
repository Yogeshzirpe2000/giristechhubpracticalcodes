#include<stdio.h>
int main(){
    int *p1,*p2,first,second,num;
    printf("Enter two values\n");
    scanf("%d %d",&first,&second);
    p1=&first;
    p2=&second;

    num=*p1+*p2;

    printf("addition is %d",num);
}