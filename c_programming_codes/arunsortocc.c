#include<stdio.h>
int main(){
    int arr[5],i,j,count,arr2[5],s=-1;
    printf("enter elements of array");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array\n");
    for(i=0;i<5;i++){
        printf("%d",arr[i]);

    }
    for(i=0;i<5;i++){
        count=1;
        for(j=i+1;j<5;j++){
            if(arr[i]==arr[j]){
                count++;
                arr2[j]=s;
            }
        }

        if(arr2[i]!=s){
        arr2[i]=count;
        if(arr2[i]>0){
        printf("\noccurance of%d is %d times",arr[i],arr2[i]);
        }
        }
    }
   
      //  printf("\n%d",arr2[i]);
    // 
     
}