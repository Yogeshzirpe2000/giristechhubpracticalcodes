#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
void insertNode(){
    if(head==NULL){
        head=(struct Node*)malloc(sizeof(struct Node));
        printf("enter data in node\n");
        scanf("%d",&head->data);
        head->next=NULL;
    }
    else{
        struct Node *temp;
        temp=(struct Node *)malloc(sizeof(struct Node));
        printf("enter data in node\n");
        scanf("%d",&temp->data);
        temp->next=head;
        head=temp;
    }
}
void insertAtEnd(){
        if(head==NULL){
            head=(struct Node*)malloc(sizeof(struct Node));
            printf("enter data in node\n");
            scanf("%d",&head->data);
            head->next=NULL;
        }
        else{
            struct Node *temp ,*temp1;
            temp=(struct Node *)malloc(sizeof(struct Node));
            printf("enter data in node\n");
            scanf("%d",&temp->data);
            temp1=head;
            while(temp1->next!=NULL){
                temp1=temp1->next;
            }
            temp1->next=temp;
            temp->next=NULL;
        }
}
void insertAtMiddel(){
        if(head==NULL){
            head=(struct Node*)malloc(sizeof(struct Node));
            printf("Enter data in node\n");
            scanf("%d",&head->data);
            head->next=NULL;
        }
        else if(head->next==NULL){
            struct Node *temp;
            temp=(struct Node*)malloc(sizeof(struct Node));
            printf("Enter data in second node\n");
            scanf("%d",&temp->data);
            temp->next=NULL;
            head->next=temp;
        }
        else{
            struct Node *temp1,*temp2;
            int flag=0,value;
            printf("enter value of node after that you want to insert node\n");
            scanf("%d",&value);
            temp1=head;
            while(temp1!=NULL){
                temp2=temp1;
                if(temp1->data==value){
                    temp1=temp1->next;
                    flag=1;
                    break;
                }
                temp1=temp1->next;
            }
            if(flag){
                struct Node *temp;
                temp=(struct Node *)malloc(sizeof(struct Node));
                printf("Enter data in new node\n");
                scanf("%d",&temp->data);
                temp->next=temp1;
                temp2->next=temp;
            }
            else{
                printf("Node not found\n");
            }
        }
}
void display(){
    struct Node *temp;
    temp=head;
    while(temp!=NULL){
        int data=temp->data;
        printf("%d\t",data);
        temp=temp->next;
    }
    printf("\nnow head present on %u",head);
    printf("\nnow temp present on %u",temp);
}
void delNodeAtBeg(){
    if(head==NULL){
        printf("Linked list is empty\n");
    }
    else{
        struct Node *temp;
        temp=head;
        head=head->next;
        int data=temp->data;
        printf("Delete node data is %d",data);
        free(temp);
        temp=NULL;
    }
}
void delNodeAtEnd(){
    struct Node *temp1,*temp2;
    if(head==NULL){
        printf("Linked list is empty\n");
    }
    else{
        if(head->next==NULL){
            int data=head->data;
            printf("Deleted node data is %d",data);
            free(head);
            head=NULL;

        }
        else{
            temp1=head;
            while(temp1->next!=NULL){
                temp2=temp1;
                temp1=temp1->next;
            }

            temp2->next=NULL;
            int data=temp1->data;
            printf("Deleted node data is %d",data);
            free(temp1);
            temp1=NULL;
        }
        
    }
}
void delNodeAtMiddle(){
    struct Node *temp1,*temp2,*temp3;
    if(head==NULL){
        printf("Linked list is empty\n");
    }
    else{
        if(head->next==NULL){
            printf("\nIn linked list there are only one element is present\nIf you want to delete this node please enter choice 5\n");
        }
        else{
            int value;
            printf("Enter data that you want to delete\n");
            scanf("%d",&value);
            temp1=head;
            while(temp1->data!=value){
                temp2=temp1;
                temp1=temp1->next;
            }
            temp3=temp1->next;
            temp2->next=temp3;
            int data=temp1->data;
            printf("%d deleted from Linked List\n",data);
            free(temp1);
            temp1=NULL;
        }
    }
}
int main(){        
    int choice;
    do{
        printf("\n1.Insert elements");
        printf("\n2.Insert At Middle\n3.Insert At End\n4.Display elements\n5.Delete first node\n6.delete middle node\n7.Delete last node\n8.Exit\n");
        printf("\nEnter your choice\n");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                insertNode();
                break;
            case 2:
                insertAtMiddel();
                break;
            case 3:
                insertAtEnd();
                break;
            case 4:
                display();
                break;
            case 5:
                delNodeAtBeg();
                break;
            case 6:
                delNodeAtMiddle();
                break;
            case 7:
                delNodeAtEnd();
                break;
            Default:
                printf("\nenter valide choice");
        }
    }
    while(choice!=8);
    return 0;
}