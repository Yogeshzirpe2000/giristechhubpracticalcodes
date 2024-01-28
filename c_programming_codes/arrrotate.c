#include<stdio.h>
int main(){
    int arr[5];
    int index,counter;
    counter=index;
    for(int i=0;i<8;i++)
    {
        
        if(counter<=8)
        {
            int temp=arr[counter];
            arr[counter]=arr[i];
            arr[i]=temp;
        }
        counter++;
    }
    for(int i=0;i<8;i++)
    {
        printf("\t%d",arr[i]);
    }
}