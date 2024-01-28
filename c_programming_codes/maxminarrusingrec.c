#include<stdio.h>
int i,j;
int minarr(int arr[],int min)
{   if(i<5){
        if(arr[i]<min){
            min=arr[i];
        }
        i++;
        minarr(arr,min);
    }
    else
    {
        return min;

    }
   
}
int maxarr(int arr[],int max){
    if(j<5){
        if(arr[j]>max){
            max=arr[j];
        }
        j++;
        maxarr(arr,max);
    }
     else
     {
        return max;
    }
        
}
int main(){
    int arr[5],i,res1,res2;
    printf("Enter elments in array\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0],max=arr[0];
    
    res1=minarr(arr,min);
    res2=maxarr(arr,max);
    printf("min is%d\n",res1);
    printf("max is%d\n",res2);
return 0;
   
}