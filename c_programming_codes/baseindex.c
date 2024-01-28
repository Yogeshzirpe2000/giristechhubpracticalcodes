#include<stdio.h>
int i=1;
int powr=1;
int getPow(int base,int index){
    if(i<=index){
        powr=powr*base;
        i++;
        getPow(base,index);
    }
    else{
        return powr;
    }

}
int main(){
    int b,i;
    printf("Enter base and index\n");
    scanf("%d%d",&b,&i);
    int result=getPow(b,i);
    printf("power is %d",result);
}