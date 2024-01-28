#include<stdio.h>
#include<conio.h>
main()
{
   int a[3][3],i,z,j,count=0,flag=0;
   clrscr();
       printf("\n Enter 9 elements");
       for(i=0;i<3;i++)
	{
	   for(j=0;j<3;j++)
	    {
		  scanf("%d",&a[i][j]);
	    }
	}
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
	    {
		if(a[i][j]==0)
		 {
		     count++;
		 }
	    }
	 }
	 if(count>4)
	      printf("\n Sparse matrix");
	 else
	 {
	       z=5-count;
	       printf("\n %d less elements are zero for sparse",z);
	       for(i=0;i<3;i++)
		{
		   for(j=0;j<3;j++)
		   {
		      if(a[i][j]!=0)
		      {
			   a[i][j]=0;
			   z--;
		      }
		      if(z==0)
			 {
			    flag=1;
			    break;
			 }
		    
            }
		    if(flag==1)
		       break;
		}
	 }
	    for(i=0;i<3;i++)
	{
	   for(j=0;j<3;j++)
	    {
		  printf("%d",a[i][j]);
	    }
	    printf("\n");
	}

getch();
}










