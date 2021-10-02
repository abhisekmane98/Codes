// seperate out even odd no. in given 10 numbers
#include<stdio.h>
void Even(int);
int main()
{
		int a[10],b[10],c[10],i;    /* only at declaration statement 'a[10]' denote that it is array of 'a' contaning 10 variables 
		                              and all other action statement 'a[10]' denotes the position in array */ 
		printf("Enter 10 No.\n");
		for(i=0;i<=9;i++)
		    scanf("%d",&a[i]);
		for(i=0;i<=9;i++)
		{
		    if(a[i]%2==0)         // dividing position
		      b[i]=a[i];          // assigning position to posotion
		    else
		      c[i]=a[i];          // // assigning position to posotion
	    }
	    
	      printf("Even No. are %d\n",b[i]);
	   
	      printf("Even No. are %d\n",c[i]);
	    return 0;
	    
		
}

