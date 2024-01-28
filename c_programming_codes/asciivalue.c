#include<stdio.h>
int main(){
char ch='A';
while(ch<='z'){
    printf("%c\t=\t%d\n",ch,ch);
    ch++;
}
}