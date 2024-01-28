#include<stdio.h>
int main(){
    int i,j,temp,a[12]={88,87,73,70,36,87,77,36,83,86,87,77};
    int arr[12];
    int len=sizeof(a)/sizeof(a[0]);
    int mid=len/2;
    int end=len-1;
    //printf("%d",mid);
    for(i=0;i<mid;i++)
    {
       
                temp=a[i];
                a[i]=a[end];
                a[end]=temp;
                end--;
        
    }

    for(i=0;i<len;i++){
        a[i]=a[i]-4;
        printf("%c",a[i]);
    }


}
