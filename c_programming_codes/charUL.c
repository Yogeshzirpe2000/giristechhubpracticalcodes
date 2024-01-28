#include<stdio.h>

int main(){

char ch='A';
printf("Uppercase characters:");
while(ch<='Z'){
    printf("%c",ch);
    ch++;
}
ch='a';
printf("\nLowercase characters:");
while(ch<='z'){
    printf("%c",ch);
    ch++;
}
return 0;
}