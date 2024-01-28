#include<stdio.h>

int main(){
    int v,w,tw,fw;
    printf("enter the vehical and wheele number:\n");
    scanf("%d%d",&v,&w);
    tw=w/2;
    fw=tw-v;
    tw=tw-(fw*2);
    printf("\ntwo wheeler is: %d",tw);
    printf("\nfour wheeler is: %d",fw);

    return 0;
}