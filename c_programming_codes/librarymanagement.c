#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct library{
        int id,price;
        char name[89],author[89],publication[89];
        struct library *next;
};
struct authorc{
    char authorr[90];
    int count;
    struct authorc *anext;
};
struct library *head=NULL,*temp2;
struct authorc *ahead=NULL;
void addNewBook(){
        if(head==NULL){
            head=(struct library *)malloc(sizeof(struct library));
            printf("Enter book id,name,author,publication and price of book\n");
            scanf("%d%s%s%s%d",&head->id,&head->name,&head->author,&head->publication,&head->price);
            head->next=NULL;
        }
        else{
                int bid,flag=0;
                temp2=head;
                printf("Enter book id\n");
                scanf("%d",&bid);
            while(temp2!=NULL){
                if(temp2->id==bid){
                    flag=1;
                    break;
                }
                temp2=temp2->next;
            }
            if(flag){
                printf("Book with id %d is already exist,please enter valid id\n",bid);
            }
            else{
                struct library *temp,*temp1;
                temp=(struct library *)malloc(sizeof(struct library));
                printf("Enter book name,author,publication and price of book\n");
                scanf("%s%s%s%d",&temp->name,&temp->author,&temp->publication,&temp->price);
                temp1=head;
                while(temp1->next!=NULL){
                    temp1=temp1->next;
                }
                temp->id=bid;
                temp1->next=temp;
                temp->next=NULL;
            }
        }
}
void displayBook(){
        struct library *temp;
        temp=head;
        printf("BId   Bname    Bauthor  Publication price\n");
        while(temp!=NULL){
            printf("%d\t%s\t%s\t%s\t%d\n",temp->id,temp->name,temp->author,temp->publication,temp->price);
            temp=temp->next;
        }
}
void searchBook(){
    struct library *temp;
    int c;
        do{
        int bid,flag,bdata;
        char bname[90],bookauthor[90];
        temp=head;
        printf("\n1.Search book by Id\n2.Search book by Name\n3.Search book by Author name\n4.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&c);
        switch(c){
            case 1:
                printf("Enter Id of book for search\n");
                scanf("%d",&bid);
                while(temp!=NULL){
                    flag=0;
                    int data=temp->id;
                    if(data==bid){
                        flag=1;
                        break;
                    }
                    temp=temp->next;
                }
                if(flag)
                {
                    printf("%d\t%s\t%s\t%s\t%d\n",temp->id,temp->name,temp->author,temp->publication,temp->price);
                }
                break;
            case 2:
                printf("Enter Book Name of book for search\n");
                scanf("%s",&bname);
                while(temp!=NULL){
                    char bdata[90];
                    strcpy(bdata,temp->name);
                    int result=strcmp(bdata,bname);
                    if(result==0){
                        printf("%d\t%s\t%s\t%s\t%d\n",temp->id,temp->name,temp->author,temp->publication,temp->price);
                    }
                    temp=temp->next;
                }
                break;

            case 3:
                printf("Enter author Name\n");
                scanf("%s",&bookauthor);
                while(temp!=NULL){
                    char bauthor[90];
                    strcpy(bauthor,temp->author);
                    int result1=strcmp(bookauthor,bauthor);
                    if(result1==0){
                        printf("%d\t%s\t%s\t%s\t%d\n",temp->id,temp->name,temp->author,temp->publication,temp->price);
                    }
                    temp=temp->next;
                }
                break;
               
            Default:
                printf("Enter valid choice\n");
            
        }
        }while(c!=4);
}
void deletebook(){
        struct library *temp,*temp1,*temp2,*temp3;
        temp1=head;
        if(head==NULL){
            printf("Library is empty\n");
        }
        else{
                int bookid;
                printf("Enter id of book\n");
                scanf("%d",&bookid);
                if(head->id==bookid){
                    head=head->next;
                }
                else{
                    while(temp1->id!=bookid){
                        temp2=temp1;
                        temp1=temp1->next;
                    }
                    temp3=temp1->next;
                    temp2->next=temp3;
                    printf("Data is deleted\n");
                    printf("BId   Bname    Bauthor  Publication price\n");
                    printf("%d\t%s\t%s\t%s\t%d\n",temp1->id,temp1->name,temp1->author,temp1->publication,temp1->price);
                    free(temp1);
                    temp1=NULL;

                }
            }
        
}
void updatebook(){
        struct library *temp,*temp1,*temp2,*temp3,*temp4;
        temp1=head;
        if(head==NULL){
            printf("Library is empty\n");
        }    
        else{
            int bookid;
            printf("Enter book id\n");
            scanf("%d",&bookid);
                if(head->id==bookid){
                    temp4=head->next;
                    temp=(struct library*)malloc(sizeof(struct library));
                    printf("Enter updated data\n");
                    printf("Enter book id,name,author,publication and price of book\n");
                    scanf("%d%s%s%s%d",&temp->id,&temp->name,&temp->author,&temp->publication,&temp->price);
                    head=temp;
                    temp->next=temp4;

                }
                else{
                    temp=(struct library*)malloc(sizeof(struct library));
                    printf("Enter Updated data\n");
                    printf("Enter book id,name,author,publication and price of book\n");
                    scanf("%d%s%s%s%d",&temp->id,&temp->name,&temp->author,&temp->publication,&temp->price);
                    temp1=head;
                        while(temp1->id!=bookid){
                            temp2=temp1;
                            temp1=temp1->next;
                        }
                    temp3=temp1->next;
                    temp2->next=temp;
                    temp->next=temp3;
                    free(temp1);
                    temp1=NULL;

                    }

        }

}
void authorcount(){
    int count=0;
    char aname[90];
    printf("Enter author name\n");
    scanf("%s",&aname);
    struct library *temp;
    temp=head;
    while(temp!=NULL){
        if(strcmp(temp->author,aname)==0){
            count++;
        }
        temp=temp->next;

    }
    printf("\n%d books present in library of author %s\n",count,aname);
}
void pricecount(){
    int count=0;
    int aprice;
    printf("Enter price of book\n");
    scanf("%d",&aprice);
    struct library *temp;
    temp=head;
    while(temp!=NULL){
        if(temp->price==aprice){
            count++;
        }
        temp=temp->next;
    }
    printf("total %d book availble in library of %d price\n",count,aprice);
}
void publicationcount(){
    int count=0;
    char apublication[90];
    printf("Enter publication name\n");
    scanf("%s",&apublication);
    struct library *temp;
    temp=head;
    while(temp!=NULL){
        if(strcmp(temp->publication,apublication)==0){
            count++;
        }
        temp=temp->next;
    }
    printf("%d book available in library of %s publication\n",count,apublication);
}
void authorsort(){
        struct library *temp1;
        struct authorc *atemp,*atemp1,*atemp2,*atemp3,*btemp1,*btemp2;
        temp1=head;
        int found=0;
        while(temp1!=NULL){
            
            if(ahead==NULL)
            {
                atemp=(struct authorc *)malloc(sizeof(struct authorc));
                strcpy(atemp->authorr,temp1->author);
                atemp->count=1;
                ahead=atemp;
                atemp->anext=NULL;
            }
            else{
                atemp1=ahead;
                found=0;
                while(atemp1!=NULL)
                {   
                    atemp3=atemp1;
                    if(strcmp(atemp1->authorr,temp1->author)==0){
                        atemp1->count+=1;
                        found=1;
                        break;
                    }
                   atemp1=atemp1->anext;
                }
                    if(found==0)
                    {
                    atemp2=(struct authorc *)malloc(sizeof(struct authorc));
                    strcpy(atemp2->authorr,temp1->author);
                    atemp2->count=1;
                    atemp3->anext=atemp2;
                    atemp2->anext=NULL;
                    }

            }
            temp1=temp1->next;
        } 
       btemp1=ahead;
        while(btemp1!=NULL){
            btemp2=btemp1->anext;
            while(btemp2!=NULL){
                if(btemp2->count > btemp1->count){
                    int temp=atemp1->count;
                    atemp1->count=atemp2->count;
                    atemp2->count=temp;
                }
                btemp2=btemp2->anext;
            }
            btemp1=btemp1->anext;
        }
        struct authorc *atemp5;
        atemp5=ahead;
        if(atemp5==NULL){
            printf("Linked list is empty! please enter data in linked list first\n");
        }
        else{
        printf("author name\t\t\t count\n");
        while(atemp5!=NULL){
            printf("%s\t\t\t\t%d\n",atemp5->authorr,atemp5->count);
            atemp5=atemp5->anext;
        }
        }
        free(ahead);
        ahead=NULL;   
}
int main(){
    int choice;
    do{
        printf("\n1: Add New Book but book info should not be Duplicate\n2: View All Books\n3: Search book by id or name or author etc\n4: delete book by id\n5: update book info by using id\n6: count the book author wise\n7: count the book price wise\n8: count book publication wise\n9: arrange authors names as per book count by using descending order\n0: Exit\nEnter Your Choice\n");
        scanf("%d",&choice);

        switch(choice){
                case 1:
                    addNewBook();
                    break;
                
                case 2:
                    displayBook();
                    break;
                case 3:
                    searchBook();
                    break;
                case 4:
                    deletebook();
                    break;
                case 5:
                    updatebook();
                    break;
                case 6:
                    authorcount();
                    break;
                case 7:
                    pricecount();
                    break;
                case 8:
                    publicationcount();
                    break;
                case 9:
                    authorsort();
                    break;
                default:
                    printf("Please enter valid choice\n");

                }

    }
    while(choice!=0);




    return 0;
}