// ASCII genrate, how get 65535,255  
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{

		float a=0,b=0;
		int c;
		while(b<=7)                             // b=7 255;b=15 65535
		{
			a=a+pow(2.0,b);
			b++;
		}
		c=a;
		printf("%d",c);
		return 0;
		
}
