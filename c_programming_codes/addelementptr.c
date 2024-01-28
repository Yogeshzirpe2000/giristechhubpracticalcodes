#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,i,j,num,idx;
    printf("Enter the number you want add\n");
    scanf("%d",&num);
    printf("In which index you wnat to add this element\n");
    scanf("%d",&idx);
    ptr=(int*)malloc(5*sizeof(int));

    printf("Enter 5 elments");
    for(i=0;i<5;i++){
        scanf("%d",ptr++);
    }
    ptr=ptr-5;
    for(i=4;i>=idx;i--){
        *(ptr+i)=*(ptr+i-1);

    }
    *(ptr+idx)=num;
    for(i=0;i<5;i++){
        printf("updated elements are %d\n",*ptr++);
    }

}