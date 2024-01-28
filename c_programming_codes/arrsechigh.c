#include<stdio.h>
int main(){
     int num=5;
     int arr[num],arr2[num],i,j,len,max,secmax;
     len=sizeof(arr)/sizeof(arr[0]);
     printf("enter elements of array");
    for(i=0;i<len;i++){
    scanf("%d",&arr[i]);
    }//2 3 5 8 1 
    max=0,secmax=0;
    for(i=0;i<len;i++){
       if(max<arr[i])
        {
            max=arr[i];
        }
       else if(arr[i]>secmax && arr[i]<max){
            secmax=arr[i];
        }       
    }
    for(i=0;i<len;i++){

       
    }
    printf("%d",secmax);
// for(i=0;i<len;i++){
//     if(arr[i]>max){
//         secmax=max;
//         max=arr[i];
//     }
//     else if(arr[i]>secmax && arr[i]!=max){
//         secmax=arr[i];
//     }
// }
//printf("%d",secmax);
    
}