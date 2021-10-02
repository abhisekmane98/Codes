#include<stdio.h>
int main()
{
		int a[5]={11,12,13,14,15};
		int i,n=5;                         // n=No. of integers in array
		int *j;                      
		
		for(i=0;i<=n-1;i++)
	     	printf("%d ",i[a]);            //  a[i]=i[a]
	     	
	    printf("\n");
	     	
	    j=a;	                      //  j=&a/j=&a[0]/j=a
	    for(i=0;i<=n-1;i++)
	    {
	    	printf("%d ",*j);
	    	j++;
		}
	    return 0;
	    
	    
}
