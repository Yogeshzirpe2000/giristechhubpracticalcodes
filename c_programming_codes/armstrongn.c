#include<stdio.h>
#include<math.h>
int main(){
    int n,count,num,rem,arm;
    printf("enter number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    num=i;
    count=0;
    arm=0;
    while(num!=0){
        num=num/10;
       // printf("%d\n",num);
        ++count;
       
    }
    // printf("%d\n",count);
    num=i;
    
    while(num>0){
        rem=num%10;
        num=num/10;
        arm= arm + pow(rem,count);
    }
   //printf("%d\n",arm);
    if(arm==i){
         printf("%d\n",i);
     }
   
    }
}