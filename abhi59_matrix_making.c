// undrestand 2d array
#include<stdio.h>
int main()
{
		int a[3][3],b[3][3]; 
		int i,j;
		int p,q,r;
		
		printf("Enter 9 values of first matrix in order");
		for(i=0;i<=2;i++)
		   for(j=0;j<=2;j++)
		      scanf("%d",&a[i][j]);
		
		printf("Enter 9 values of second matrix in order");
		for(i=0;i<=2;i++)
		   for(j=0;j<=2;j++)
		      scanf("%d",&b[i][j]);
		      
		printf("Enter any index No.,i will give you value stored in it.\n");
		
		scanf("%d%d%d",&p,&q,&r);
		if(p==0)
		  printf("%d",a[q][r]);
		else
		  printf("%d",b[q][r]);
		  		
		return 0;
				  		      		     		  
}
