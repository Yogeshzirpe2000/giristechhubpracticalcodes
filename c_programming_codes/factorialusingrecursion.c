#include<stdio.h>
    int fact=1;

int factorial(int num){
    if(num>0){
        fact=fact*num;
        --num;
        factorial(num);
    }
    
    // int fact=1;
    // while(num>0){
    //     fact=fact*num;
    //     --num;
    // }
return fact;
}
int main(){
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    int result=factorial(num);
    printf("%d",result);
return 0;
}