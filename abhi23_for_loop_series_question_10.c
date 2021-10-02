// class program on loops 41
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
		float a,b;
		for(a=1;a<5;a++)
		{
			b=b+pow(a,0.5);   // we can use sqrt() also
		}
		printf("%f",b);
		return 0;
}
