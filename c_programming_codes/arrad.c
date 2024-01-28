#include<stdio.h>
int main(){
    int i,j,temp,arr[5];
    printf("enter elements of array\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n Enter \n 1.Assending order \n 2.Descending order\n");
    int choice;
    scanf("%d",&choice);
    switch(choice){
        case 1:
            for(i=0;i<5;i++){
                for(j=i+1;j<5;j++){
                if(arr[i]>arr[j]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
                }
            }
            for(i=0;i<5;i++){
            printf("\t%d",arr[i]);
            }
            break;
        case 2:
            for(i=0;i<5;i++){
                for(j=i+1;j<5;j++){
                if(arr[i]<arr[j]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
                }
            }
            for(i=0;i<5;i++){
            printf("\t%d",arr[i]);
            }
            break;
        default:
            printf("Choice is Invalid");
            break;

    }
    
    
}