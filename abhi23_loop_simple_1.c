//loop
//8/6/19
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	for(a=13,b=1;a<=69||b<=111;a++,b++)
	{
	  if(a%2!=0)
	  {
	    printf(" %d",a);
	  }
	  if(b%16==0)
	  {
	    printf("\n");
	  }
	}
	getch();
}
