// class programs on loop 44tdio.h   answer with first 3 terms is 188.08
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
		float a,b,c,s=0.0;
		for(a=1.0,b=2.0,c=2.0;c<=4;a++,b+=2,c++)
		{
			s=s+(pow(a,b))/c;
		}
		printf("%f",s);
		return 0;
}
