// modification and find error
#include<stdio.h>
int main()
{
		int n[5][2],r=5,s=2,i,j;
		printf("Enter Roll No. and marks\n");
		
		for(i=0;i<=r-1;i++)
		{
		  for(j=0;j<=s-1;j++)
		     scanf("%d",&n[i][j]);   // \n
		}
		
		printf("\n");
		     
		for(i=0;i<=r-1;i++)
		{
		  for(j=0;j<=s-1;j++)
		     printf("%d ",n[i][j]);  // space
		     
		  printf("\n");
	    }
		     
		return 0;
		    
		     
		   
		
}
