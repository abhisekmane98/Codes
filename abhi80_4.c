// again see change
#include<stdio.h>
int main()
{    while(1)
     {

		int a[5],i,t,r;
		printf("\n\nEnter 5 numbers\n");
		for(i=0;i<=4;i++)                              
		   scanf("%d",&a[i]);
		   
		for(r=1;r<=4;r++)                              // r=1
		{
			for(i=0;i<=5-r;i++)                       //  i<=5-r  
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
