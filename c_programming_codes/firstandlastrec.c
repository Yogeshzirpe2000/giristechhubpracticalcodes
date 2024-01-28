#include<stdio.h>
#include<math.h>
int first,last,k=0;
int firstlast(int num){
    int n=num;
    while(num>0){
        num=num/10;
        k++;
    }
    num=n;
    first=pow(10,k-1);
    first=num/first;
    last=num%10;
    printf("first digit is-->%d\nsecond digit is-->%d",first,last);
}
int main(){
    int num;
    printf("Enter Number\n");
    scanf("%d",&num);

    firstlast(num);
}