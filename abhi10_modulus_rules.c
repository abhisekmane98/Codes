//understanding '5' modulus operator,numerator sign,can't apply on float
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d;
	clrscr();
	a=5%2;
	b=-5%2;
	c=5%-2;
	d=-5%-2;
	printf("%d,%d,%d,%d",a,b,c,d);
	getch();
}
