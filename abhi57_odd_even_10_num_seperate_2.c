// seperate out even odd no. in given 10 numbers
#include<stdio.h>
void Even(int);
int main()
{
		int a[10],b[10],c[10];      /* only at declaration statement 'a[10]' denote that it is array of 'a' contaning 10 variables 
		                                and all other action statement 'a[10]' denotes the position in array */ 
		int i,d;
		printf("Enter 10 No.\n");
		for(i=0;i<=9;i++)
		    scanf("%d",&a[i]);
		for(i=0;i<=9;i++)
		{
			d=a[i]%2;
			if(d==0)
			  printf("even %d\n",a[i]);
			else
			  printf("odd  %d\n",a[i]);
			  
	    }
	    return 0;
	    
		
}

