#include<stdio.h>
int main()
{
		int n[5],m[5];
		int i,r=5;                                // r is no. of integers in array
		int *j,*k;
		printf("Enter your Roll No. and marks\n");	
		
		j=n;
		k=m;
		for(i=0;i<=r-1;i++)
		{
		   scanf("%d %d",j,k);
		   j++;
		   k++;
	    }
	    
	    printf("\n");
	    printf("%d,%d,%d\n",n[3],m[2],n[4]);
	    getch();
	    
	    j=n;
	    k=m;                               // due to 14 and 15 line,value of adress stored is changed
	    for(i=0;i<=r-1;i++)
	    {   
	       printf("%d %d\n",*j,*k);
	       j++;
	       k++;
	    }
	    
	    return 0;
	       
	       
}
