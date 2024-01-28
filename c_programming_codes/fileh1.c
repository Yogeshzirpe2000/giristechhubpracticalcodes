#include<stdio.h>
int main(){
    FILE *fptr,*fptr1;
    int choice;
    char ch;
do{
    printf("\n1.add data in file\n2.display data of file\n");
    printf("enter your choice\n");
    scanf("%d",&choice);
    fptr=fopen("D:\\My Pro\\file handling\\insert.txt","w");
    switch(choice){
        case 1:
            do{
            printf("Enter data in file\n");
            scanf("%c",&ch);
            if(ch=='$'){
                break;
            }
            fputc(ch,fptr);
            printf("data enter successfully\n");
            }while(1);
            fclose(fptr);
            break;

        case 2:
            fptr1=fopen("D:\\My Pro\\file handling\\insert.txt","r");

            char ch1;
            do{
            ch1=fgetc(fptr1);
            printf("%c",ch1);
            }
            while(ch1!=EOF);
            printf("data save successfully\n");
            }
            fclose(fptr1);
            break;

}
while(choice!=3);
return 0;
}