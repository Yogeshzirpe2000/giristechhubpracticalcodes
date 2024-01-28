#include<stdio.h>
int main(){
    void areaOfTriangle(float,float);
    float base,height;
    printf("Enter base and height\n");
    scanf("%f %f",&base,&height);

    areaOfTriangle(base,height);
return 0;
}
void areaOfTriangle(float x,float y){
    float areaoftriangle;
    areaoftriangle=0.5*x*y;
    printf("area of tringle is%.2f",areaoftriangle);
}