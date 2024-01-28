#include<stdio.h>
char count='a';
void naturalnum(char ch){
    if(count<=ch){
        printf("%c\n",count);
        ++count;
    }
    naturalnum(ch);
}
int main(){
    char ch;
    printf("Enter character\n");
    scanf("%c",&ch);
    naturalnum(ch);

}