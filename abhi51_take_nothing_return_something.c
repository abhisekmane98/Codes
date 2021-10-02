//  take nothing 
//  returrn something
// marry or not
#include<stdio.h>
#include<conio.h>
char marry(void);
int main()
{
		char x;
		x=marry();
		printf("%c",x);
		return 0;
		
}

char marry()
{
		int a;
		printf("Enter your age");
		scanf("%d",&a);
		if(a>=18)
		  return 'M';
		else
		   return 'U';
		  
}


