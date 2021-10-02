//
#include<stdio.h>
int main()
{
		int a[3][3],i,j;
		printf("Enter 9 No. to stotre in 2d array of 'a'/n");
		for(i=0;i<=2;i++)
		   for(j=0;j<=2;j++)
		      scanf("%d",&a[i][j]);
		for(i=0;i<=2;i++)
		   for(j=0;j<=2;j++)
	          printf("%d",a[i][j]);
	    return 0;
	    
}
