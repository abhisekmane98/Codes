//sizeof()
//25/05/19,abhishek
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b1,b2,c,d;
	char e;
//	clrscr();
	a=sizeof(34);
	b1=sizeof(3.98);
	b2=3.98;
	b2=sizeof(b2);     // b2=4 due to b2 is storing 3 which is integer constant and for int constant memory allocate in devc++ is 4 byte
	                   /*  why ?? b1=8 and b2=4
	                       when we take input in sizeof() function in case of b1 the 3.98 is not defined as float,int,..data type so for preciseness 
						   it considerd as double data type   */
	c=sizeof('a');
	d=sizeof(a);
	e='a';
	printf("value of a=%d b1=%d b2=%d c=%d d=%d and e=%d",a,b1,b2,c,d,e);
//	getch();
    return 0;

}
