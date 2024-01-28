#include<stdio.h>
#include<math.h>
int main(){
    int n,digit,ans=0,i=0;
    printf("enter binary number");
    scanf("%d",&n);
    while(n!=0){
        digit=n%10;
        if(digit==1){
            ans=ans+(digit*pow(2,i));

        }
        n=n/10;
        i++;
    }
    printf("%d",ans);
}