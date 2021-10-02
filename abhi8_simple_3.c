//Y.K book p.no 17 hra,da,bs,g.s?
//9/6/19
#include<stdio.h>
#include<conio.h>
void main()
{
	int bs;
	float da,hra,gs;
	clrscr();
	printf("enter your basic salary");
	scanf("%d",&bs);
	da=0.4*bs;
	hra=0.2*bs;
	gs=bs+da+hra;
	printf("your gs is %f",gs);
	getch();
}
