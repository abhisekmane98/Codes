//loop
//8/6/19
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	for(a=13,b=1;a<=69;a+=2,b++)
	{
	  printf(" %d",a);
	  if(b%8==0)
	  {
	    printf("\n");
	  }
	}
	getch();
}
