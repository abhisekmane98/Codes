// class programs on loops (38)
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
		float a=0.0,b,c;
		for(b=2,c=5;c<=7;b++,c++)
		{
			a=a+pow(b,2.0)*c;
		}
		printf("%f",a);
		return 0;
}
