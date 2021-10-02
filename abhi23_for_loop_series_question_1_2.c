// sum and product of first five natural no.
#include<stdio.h>
#include<conio.h>
int main()
{
		int a,b,c;
		for(a=1,b=0,c=1;a<6;a++)
		{
			b=a+b;
			c=a*c;
	    }
			printf("%d,%d",b,c);
		return 0;
		
}
