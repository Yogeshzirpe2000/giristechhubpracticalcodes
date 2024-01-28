#include<stdio.h>
#include<math.h>
int main(){
    int n,c=0,num,rem,rev=0,lastd,firstd,result=0,midd,mid,s;
    printf("Enter number");
    scanf("%d",&n);
    num=n;
        while(num>0){
            c++;
            num=num/10;
        }
    num=n;
    c=c-2;
    firstd=pow(10,c);
    firstd=num/firstd;
    lastd=num%100;
    midd=pow(10,c);
    midd=num%midd;
    midd=midd/100;
    mid=midd;
    s=pow(10,c);
        while(mid>0){
            rem=mid%10;
            mid=mid/10;
            rev=rev*10+rem;
        }
    printf("%d",result=result+lastd*s+rev*100+firstd);
}