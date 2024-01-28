#include<stdio.h>
int main(){
    void areaOfRectangle(float,float);
    float length,width;
    printf("Enter length and width\n");
    scanf("%f %f",&length,&width);

    areaOfRectangle(length,width);
return 0;
}
void areaOfRectangle(float x,float y){
    float areaofrectangle;
    areaofrectangle=x*y;
    printf("area of tringle is%.2f",areaofrectangle);
}