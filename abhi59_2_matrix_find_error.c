// find three error
// matrix addition
#include<stdio.h>
int main()
{
		int a[3][3],b[3][3];
		int c[3][3];
		int i,j;
		
		printf("Enter 9 values to store in array'a'\n");
		
		for(i=0;i<=9;i++)
		  for(j=0;j<=9;j++)
		     scanf("%d",&a[i][j]);
		     
		printf("Enter 9 values to store in array 'b'\n");
		
		for(i=0;i<+9;i++)
		  for(j=0;j<=9;j++)
		    scanf("%d",&b[i][j]);
		    
		for(i=0;i<=9;i++)
		  for(j=0;j<=9;j++)
		    c[i][j]=a[i][j]+b[i][j];
		    
		for(i=0;i<=9;i++)
		  for(j=0;j<=9;j++)
		   printf("%d ",a[i][j]);
		   
		for(i=0;i<=9;i++)
		{
		  for(j=0;j<=9;j++)
	      {
		    printf("%d ",a[i][j]);
	      }
	      printf("\n");
	    }
	return 0;	    								
}
