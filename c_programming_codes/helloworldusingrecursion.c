#include<stdio.h>
int show(int count){
    if(count<5){
        printf("Hello World\n");
    }
    ++count;
    show(count);
}
int main(){
    show(0);
    return 0;
}