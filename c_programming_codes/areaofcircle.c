#include<stdio.h>


int main(){
    
    int radius;
    void findAreaOfCircle(int);
    printf("enter radius of circle\n");
    scanf("%d",&radius);

    findAreaOfCircle(radius);

return 0;

}
void findAreaOfCircle(int x){
    float area;
    float pi=3.14;
    area=pi*(x*x);
    printf("area of circle is\t%f",area);
}
