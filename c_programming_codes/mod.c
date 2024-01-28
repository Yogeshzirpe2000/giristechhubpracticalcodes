#include<stdio.h>
int main(){
    int num=145,count=0;
    while(num!=0){
        num=num/10;
       // printf("%d\n",num);
        ++count;
       
    }
     printf("%d\n",count);
}