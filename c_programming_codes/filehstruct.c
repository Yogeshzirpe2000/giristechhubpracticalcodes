#include<stdio.h>
#include "displayfile.h"
struct employee{
    int id;
    char name[90];
    int sal;
};
struct employee emp;
int main(){
    FILE *fptr;
    int choice;
    fptr=fopen("D:\\My Pro\\file handling\\employee.txt","w+");
    do{
        printf("Enter id name and salary of employee\n");
        scanf("%d%s%d",&emp.id,&emp.name,&emp.sal);
        fprintf(fptr,"%d\t%s\t%d",emp.id,emp.name,emp.sal);
        fprintf(fptr,"\n");
        printf("\nDo you want to more employee data\n");
        scanf("%d",&choice);
    }while(choice!=0);
    fclose(fptr);
    printf("Employee data save successfully\n");
    dispalyfile(emp,fptr);
    return 0;
}