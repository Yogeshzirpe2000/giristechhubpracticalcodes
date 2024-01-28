#include<stdio.h>


int main(){
    
    int a,b;
    void findAreaOfCircle(int,int);
    printf("enter 2 values\n");
    scanf("%d%d",&a,&b);

    findAreaOfCircle(a,b);

return 0;

}
void findAreaOfCircle(int x,int y){
    printf("area of addition is\t%d",x+y);
}
