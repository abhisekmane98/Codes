// reverse 5 digit no.
#include<stdio.h>
#include<conio.h>
int main()
{
		int a5,a,b,c,d,e;
		printf("Enter a 5 digit no.");
		scanf("%d",&a5);
		e=a5%10;                        // a5=abcde
		a5=a5/10;                       // a5=abcd
		d=a5%10;
		a5=a5/10;
		c=a5%10;
		a5=a5/10;
		b=a5%10;
		a=a5/10;
		printf("reverse is %d%d%d%d%d",e,d,c,b,a);
		return 0;
		
}
