#include<stdio.h>
int table(int idx,int num){
    int res=0;
    while(idx<=10){
        res=num*idx;
        printf("%d\n",res);
        ++idx;
    }
    table(idx,num);
}
int main(){
    int num,idx=1;
    printf("enter number you want to print table\n");
    scanf("%d",&num);
    table(idx,num);
return 0;
}