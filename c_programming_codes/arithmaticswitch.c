#include<stdio.h>
int main(){
    int choice,a,b;
    printf("\n 1:Addition\n");
    printf("\n 2:substraction \n");
    printf("\n 3:multiplication \n");
    printf("\n 4:division\n");
    printf("\n 5:modulus \n");

    printf("Enter values of a and b\n");
    scanf("%d %d",&a,&b);
    printf("Enter your choice\n");
    scanf("%d",&choice);

    switch(choice){
    case 1:
        printf("\nAddition is %d\n",a+b);
        break;
    case 2:
        printf("\nSubstraction is%d\n",a-b);
        break;
    case 3:
        printf("\nMultiplication is%d\n",a*b);
        break;
    case 4:
        printf("\nDivision is%d\n",a/b);
        break;
    case 5:
        printf("\nModulus is %d\n",a%b);
        break;
    Default:
        printf("\nwrong choice\n");
        break;
    }
return 0;
}