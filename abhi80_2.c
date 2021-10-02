// find error
#include<stdio.h>
int main()
{    while(1)
     {

		int a[5],i,t,r;
		printf("\n\nEnter 5 numbers\n");
		for(i=0;i<=4;i++)
		   scanf("%d",&a[i]);
		   printf("%d,%d,%d\n",a[5],a[6],a[9]);
		   getch();
		   
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
     }
		return 0;
		
}
