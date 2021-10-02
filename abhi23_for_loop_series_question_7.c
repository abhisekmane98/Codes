// class programs on loop (36)
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
		float a,b,c=0.0;
		for(a=1,b=2;b<=4,a<=4;a++,b++)
		{
			c=c+pow(a,b);
		}
		printf("%f",c);
		return 0;
}
