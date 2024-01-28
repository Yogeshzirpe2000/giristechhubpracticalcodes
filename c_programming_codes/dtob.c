#include<stdio.h>
#include<math.h>
int main(){
    int n,ans=0,bit,i=0;
     printf("enter number");
     scanf("%d",&n);
    while(n!=0){
        bit=n&1;
        ans=(bit*pow(10,i))+ans;
       n= n>>1;
        i++;
    }
    printf("%d",ans);
}