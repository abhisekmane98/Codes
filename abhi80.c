// find error
#include<stdio.h>
int main()
{
		int a[5],i,t,r;
		printf("Enter 5 numbers\n");
		for(i=1;i<=4;i++)
		   scanf("%d",&a[i]);
		   
		for(r=0;r<=4;r++)
		{
			for(i=0;i<=4;i++)
			if(a[i]>a[i+1])
			{
		      t=a[i];
			  a[i]=a[i+1];
		  	  a[i+1]=t;
		    }
			
		}
		
		
		
		for(i=0;i<=4;i++)
		  printf("%d ",a[i]);
		return 0;
		
}
