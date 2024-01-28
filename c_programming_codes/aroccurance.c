#include<stdio.h>
int main(){
    int i,temp,j,n,position;
    printf("Enter number you want to create array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array\n");

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter index from that you want to rotate\n");
    scanf("%d",&position);

    printf("before rotation\n");
    
     for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    for(i=0;i<position;i++){
        temp=arr[0];
        for(j=0;j<n;j++){
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
        printf("%d\n",temp);

    }
    printf("\nafter rotation\n");

     for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

}