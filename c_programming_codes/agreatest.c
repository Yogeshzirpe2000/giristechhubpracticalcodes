#include<stdio.h>
int main(){
    int i,j,arr[6],greatest;
    printf("enter elements for array\n");
    for(i=0;i<6;i++){
    scanf("%d",&arr[i]);
    }
      greatest=arr[0];
    for(i=0;i<6;i++){
        for(j=i;j<6;j++){
            greatest=arr[i];
            if(arr[j]>greatest)
            {
            greatest=arr[j];
            break;
            }
            else{
                greatest=-1;
            }
            
            
        }
        printf("After %d we have %d greatest number\n",arr[i],greatest);
       
    }
}