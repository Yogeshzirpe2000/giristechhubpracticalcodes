#include<stdio.h>
#include<math.h>
void isPalindrom(int num){
    int rem,no=num,rev=0;
    do{
    rem=num%10;//123
    num=num/10;
    rev=rev*10+rem;
    }
    while(num>0);
    if(no==rev){
        printf("number is palindrom\n");
    }
    else{
        printf("number is not palindrom\n");
    }

}
void isArmstrong(int num){
    int k=0,temp,rem,arm=0;
    temp=num;
    while(num>0){
        num=num/10;
        k++;
    }
    num=temp;
    while(num>0){
        rem=num%10;
        arm=arm+pow(rem,k);
        num=num/10;
    }
    num=temp;
    if(arm==num){
        printf("Number is armstrong\n");
    }
    else{
        printf("Number is not armstrong\n");
    }
}
void isPrime(int num){
    int flag=0;
    int i=2;
    while(i<num){
        if(num%i==0){
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0){
        printf("Number is prime\n");
    }
    else{
        printf("Number is not prime\n");
    }
}
void isPerfect(int num){
    int i=1,res=0;
    while(i<=num/2){
        if(num%i==0){
        res=res+i;
        }  
        i++;
    }
    if(num==res){
        printf("Number is perfect\n");
    }
    else{
        printf("Number is not perfect\n");
    }
}

int main(){
    int num,choice;
    char ch;
    do{
    printf("enter your choice\n1.palindrom\n2.armstrong\n3.prime\n4.pecfect number\n");
    scanf("%d",&choice);
     printf("Enterr any number\n");
    scanf("%d",&num);
    switch(choice){
        case 1:
            isPalindrom(num);
            break;
        case 2:
            isArmstrong(num);
            break;
        case 3:
            isPrime(num);
            break;
        case 4:
            isPerfect(num);
            break;
        default:
            printf("Please enter valid choice\n");
        
    }
    printf("if you want to continue the please enter y");
    scanf("%c",&ch);
}
while(ch=='y');

return 0;
}