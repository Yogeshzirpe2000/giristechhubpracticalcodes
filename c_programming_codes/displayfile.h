#include<stdio.h>
void dispalyfile(struct employee emp,FILE *fptr){
        while(fscanf(fptr,"%d%s%d",&emp.id,&emp.name,&emp.sal)!=EOF){
            printf("%d%s%d",emp.id,emp,name,emp.sal);
        }
}