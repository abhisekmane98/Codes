// catch the error
#include<stdio.h>
#include<conio.h>
int main()
{
	
		int n,a,b;
		printf("Enter a number");
		scanf("%d",&n);
		if(n==1)
		    printf("Neither Consonant nor Prime No.");
		if(n==2)
	    	printf("Prime No");
		
		for(a=2;a<=n-1;a++)
		{
			b=n%a;
			if(b==0) 
			{
			    printf("Consonant");       /* last pb solution
			                                   9%2=1 then break statement then out of for loop , now b=1 which is not equal to 0 so print prime no. */
			    break;
		    }
		}
		if(b!=0)
		  printf("Prime No.");

	return 0;
		
}
