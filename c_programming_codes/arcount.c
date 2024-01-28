#include<stdio.h>
int main()
{
    int i,j,numsSize=10,nums[10]={0,0,1,1,1,2,2,3,3,4};
    for(i=0;i<numsSize;i++){
        if(nums[i]==nums[i+1])
        { for(j=i+1;j<numsSize;j++){
                 nums[j]=nums[j+1];
            }
          numsSize--;
        }
    }
    printf("%d\n",numsSize);
    for(i=0;i<numsSize;i++){
        printf("%d",nums[i]);
    }
}


