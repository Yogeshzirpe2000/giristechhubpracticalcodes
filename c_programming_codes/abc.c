void authorsort(){
        if(ahead==NULL){
            ahead=(struct authorbookcount*)malloc(sizeof(struct authorbookcount));
            ahead->id=head->id;
            strcpy(ahead->name,head->name);
            ahead->count=head->count+1;
        }
        else{
            struct library *temp1,*temp2;
            struct authorbookcount *atemp,*atemp1,*atemp2;
            atemp=(struct authorbookcount*)malloc(sizeof(struct authorbookcount));
            temp1=head;
            while(temp1!=NULL){
                atemp->id=temp1->id;
                atemp->name=temp1->name;
                atemp->count=atemp->count+1;

                atemp1=ahead;
                while(atemp1!=NULL){
                    atemp=atemp->next;
                }
                atemp1->next=atemp;
                atemp->next=NULL;
                temp1=temp1->next;
                
            }

        }





        else{
                //atemp=(struct authorc *)malloc(sizeof(struct authorc));
               // while(temp1->next!=NULL){
                   // while(atemp1->anext!=NULL){
                        if(strcmp(atemp1->authorr,temp1->author)==0){
                            atemp1->count+1;
                        }
                        else{
                            atemp=(struct authorc *)malloc(sizeof(struct authorc));
                    
                        }
                    //}
               // }
            }
}







 
        struct library *temp;
        temp=head;
        printf("BId   Bname    Bauthor  Publication price\n");
        while(temp!=NULL){
            printf("%d\t%s\t%s\t%s\t%d\n",temp->id,temp->name,temp->author,temp->publication,temp->price);
            temp=temp->next;
        }

        struct authorc *atemp5;
        atemp5=ahead;
        printf("author name\t\t\t count\n");
        while(temp!=NULL){
            printf("%s\t\t\t\t%d",atemp5->authorr,atemp5->count);
            atemp5=atemp5->anext;
        }










       struct authorc *atemp5;
        atemp5=ahead;
        printf("author name\t\t\t count\n");
        while(atemp5!=NULL){
            printf("%s\t\t\t\t%d\n",atemp5->authorr,atemp5->count);
            atemp5=atemp5->anext;
        }



        btemp1=ahead;
        while(btemp1!=NULL){
            btemp2=btemp1;
            while(btemp2!=NULL){
                if(btemp2->count > btemp1->count){
                    int temp=atemp1->count;
                    atemp1->count=atemp2->count;
                    atemp2->count=temp;
                }
                btemp2=btemp1->anext;
            }
            btemp1=btemp1->anext;
        }