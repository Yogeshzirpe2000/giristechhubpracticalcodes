#include<stdio.h>
#include<string.h>
int findSubstring(char ch[],char ch1[],int len){
    int i=0,k=0;
    while(ch[i]!='\0'){
        if(ch[i]==ch1[k]){
            ++k;
            i++;
        }
        else{
            k=0;
            i++;
        }
        if(k==len){
            break;
        }
    }
    if(k==len){
        return 1;
    }
    else{
        return -1;
    }
}
int main(){
    char ch[90],ch1[90];
    int len;
    printf("enter string\n");
    gets(ch);
    printf("enter substring\n");
    gets(ch1);
    len=strlen(ch1);

    int result=findSubstring(ch,ch1,len);
    printf("%d",result);

}
