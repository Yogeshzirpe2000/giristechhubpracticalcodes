#include<stdio.h>
int main(){
    int num,sum=0,rem;
    printf("enter number:");
    scanf("%d",&num);
while(num>0){
    rem=num%10;
    sum=sum+rem;
    num=num/10;
}
printf("sum of all digit is %d",sum);
}