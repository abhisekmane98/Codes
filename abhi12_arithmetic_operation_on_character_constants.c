//arithmetic operators apply on int,float,char
#include<stdio.h>
#include<conio.h>
void main()
{
	int w,x;
	char y,z;
	clrscr();
	y='a';          //a=97
	z='b';          //b=98
	w=y+z;
	x='a'+'b';      /*addition performed on ascii
			  values of characters and not on themselves*/
	printf("%d,%d",w,x);
	getch();
}
