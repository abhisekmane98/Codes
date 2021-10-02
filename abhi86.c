// find error
#include<stdio.h>
int main()
{
		int n[5],m[5];
		int i,r=5;                                // r is no. of integers in array
		int *j,*k;
		printf("Enter your Roll No. and marks\n");	
		
		j=n;  // n=&n[0]
		k=m;  // m=&m[0]
		for(i=0;i<=r-1;i++)
		{
		   scanf("%d %d",j,k);
		   j++;
		   k++;
	    }
	    
	    printf("\n");
	    printf("%d,%d,%d",n[3],m[2],n[4]);
	    getch();
	    
	    printf("\n");
	    
	    for(i=0;i<=r-1;i++)
	    {
	       printf("%d %d\n",*j,*k);
	       j++;
	       k++;
	    }
	    
	    return 0;
	       
	       
}
