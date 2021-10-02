// 45 loop assignment class    answer with first 3 terms is 
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
		float a,b,c,d,s=0.0;
		for(a=2,b=3;b<=7;a++,b+=2);
		{
				c=pow(a,2.0);
				d=pow(b,2.0);
				s=s+c/d;
		}
		printf("%f",s);
		return 0;
}
