// Evaluate 1*1+2*2+3*3+4*4+.......15*15
#include<stdio.h>
#include<conio.h>
int main()
{
		int a,b;
		for(a=1,b=0;a<16;a++)
		{
				b=b+a*a;
		}
		printf("%d",b);
}
