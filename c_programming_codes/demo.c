#include<stdio.h>
int main(){
    int a,b,c,d;
   a=b=c=1;
   d=++a&&++b||++c;
   printf("%d%d%d%d",a,b,c,d);
}