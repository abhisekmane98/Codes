// 1/(2*3)+2/(3*4)+3/(4*5)+...........+20/(21*22)   answer with first 3 terms is 0.483333
#include<stdio.h>
#include<conio.h>
int main()
{
		float a,b,c,d=0.0;
		for(a=1,b=2,c=3;c<=5;a++,b++,c++)
		{
			d=d+a/(b*c);
		}
		printf("%f",d);
		return 0;
		
}
