// sum of 1+3+5......+115
#include<stdio.h>
#include<conio.h>
int main()
{
		int a=1,b=0;
		for(a;a<116;a+=2)
		{
			b=a+b;
		}
		printf("%d",b);
		return 0;
}
