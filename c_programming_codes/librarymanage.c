#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    struct library
            {
                int access_id;
                char title[90];
                char author[90];
                int price;

            };
    struct library l[3];
    int choice,count=0,accession,counter=0;
    char authorr[90],book[90],countbook[90];
    do{
    printf("\n\n1.Add book information\n2.Display book information\n3.List of all book of given author\n4.List the title of specified book\n5.List the count of books in the library\n6.List the count of book in the order of accession number\n7.Exit\nEnter your choice\n");
    scanf("%d",&choice);
    switch(choice){
            case 1:
               
                for(int i=0;i<3;i++)
                {
                     printf("Enter access_id,title of book,book author,book price\n");
                    scanf("%d%s%s%d",&l[i].access_id,&l[i].title,&l[i].author,&l[i].price);
                }
                break;
            case 2:
                printf("access_id   title of book    book author    book price\n");
                for(int i=0;i<3;i++){

                     printf("%d\t\t%s\t\t%s\t\t%d\n",l[i].access_id,l[i].title,l[i].author,l[i].price);
                }
                break;
            case 3:
                printf("Give author name whose books you want\n");
                scanf("%s",&authorr);
                for(int i=0;i<3;i++)
                {
                    if(strcmp(authorr,l[i].author)==0)
                    {
                            printf("%d\t\t%s\t\t%s\t\t%d\n",l[i].access_id,l[i].title,l[i].author,l[i].price);
                    }
                    
                }
                break;
            case 4:
                 printf("Enter book name\n");
                scanf("%s",&book);
                for(int i=0;i<3;i++)
                {
                    if(strcmp(book,l[i].title)==0)
                    {
                            printf("%d\t\t%s\t\t%s\t\t%d\n",l[i].access_id,l[i].title,l[i].author,l[i].price);
                    }
                    
                }
                break;
            case 5:
                printf("Enter book name\n");
                scanf("%s",&countbook);
                for(int i=0;i<3;i++){
                        if(strcmp(countbook,l[i].title)==0){
                            ++count;
                        }
                }
                printf("\ntotal book of that name is\t%d\n",count);
                break;
            case 6:
                for(int i=0;i<3;i++){
                    for(int j=i+1;j<3;j++){
                        if(l[i].access_id>l[j].access_id){
                            int temp=l[i].access_id;
                            l[i].access_id=l[j].access_id;
                            l[j].access_id=temp;
                        }
                    }
                }
                printf("access_id   title of book    book author    book price\n");
                for(int i=0;i<3;i++){

                     printf("%d\t\t%s\t\t%s\t\t%d\n",l[i].access_id,l[i].title,l[i].author,l[i].price);
                }
                break;



            Default:
                printf("Enter valid choice\n");
                break;

        }   
            
    }while(choice!=7);
return 0;
}