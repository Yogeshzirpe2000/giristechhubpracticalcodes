#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,i,j,diff;
    ptr=(int*)calloc(5,sizeof(int));
    printf("entere the elements in block\n");
    for(i=0;i<5;i++){
        scanf("%d",ptr++);
    }
    ptr=ptr-5;
    printf("Enter pair addition you want\n");
    scanf("%d",&diff);
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(*(ptr+i)-*(ptr+j)==diff ||*(ptr+i)-*(ptr+j)==-diff){
                printf("%d and %d difference is %d\n",*ptr+i,*ptr+j,diff);
            }
        }
    }
}