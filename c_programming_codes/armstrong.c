#include<stdio.h>
#include<math.h>

int main(){
    int a=0,num,k,rem,res=0;
    printf("\nenter number:");
    scanf("%d",&num);
    k=num;
    while(k!=0){
        k=k/10;
        ++a;
         //printf("%d\n",a);

    }
    k=num;
    while(k>0){
        rem=k%10;
        k=k/10;
        res= res + pow(rem,a);
        printf("%d\n",res);
    }
    
    // if(res==num){
    //     printf("\nNumber is armstrong");
    // }
    // else{
    //     printf("\nNumber is not armstrong");
    // }
return 0;
}