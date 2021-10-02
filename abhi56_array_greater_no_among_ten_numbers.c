// greater No. among 10 NUmbers
// array
#include<stdio.h>
int main()
{
		int a[10],i,j;
		
		for(i=0;i<=9;i++)
	    	scanf("%d",&a[i]);
	    	
		for(i=0,j=0;i<=9&&j<=9;i++)
		{
		
		    if(a[j]>=a[i])
		       continue;
		    else
		       printf("%d is not a greatest No.\n",a[j]);
		       
		    j++;
	    }
	    printf("%d is greatest No.",a[j]);
		    
		
}
