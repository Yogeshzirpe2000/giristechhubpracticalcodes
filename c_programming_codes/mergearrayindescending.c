#include<stdio.h>
int main(){
    int m,n;
    
    printf("how much number you wnat to enter in array first\n");
    scanf("%d",&n);
    
    printf("how much number you wnat to enter in array second\n");
    scanf("%d",&m);

    int i,k=0,a[n],b[n],merge[n+m];

    printf("entere elements in first array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    printf("entere elements in second array\n");
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);

    }
    for(i=0;i<n;i++){
        merge[i]=a[i];
        k++;
    }

    for(i=0;i<m;i++){
        merge[k]=b[i];
        k++;
    }

    for(i=0;i<m+n;i++){
        for(int j=i;j<m+n;j++){
            if(merge[i]<merge[j]){
                int temp=merge[i];
                merge[i]=merge[j];
                merge[j]=temp;
            }
        }
    }




    printf("Elements after merge\n");
    for(i=0;i<n+m;i++){
     printf("%d\t",merge[i]);
    }



}