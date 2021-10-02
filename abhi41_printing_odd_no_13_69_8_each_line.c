// print odd N0. from 13 to 69 such that 8 on each line
#include<stdio.h>
#include<conio.h>
int main()
{
		int a=13,b=1;
		for(a,b;a<=69,b<=48;a+=2,b++)
		{
			printf(" %d",a);
			if(b%8==0)
			  printf("\n");
		}
		return 0;
}
