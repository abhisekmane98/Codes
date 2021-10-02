//    +=,-=,*=,/=,%=    &=,|=,^=
#include<stdio.h>
#include<conio.h>
int main()
{
		int a=1,b=5,c=3,d=4,e=7;
		a+=4;   // 5
		b-=4;   // 1
		c*=4;   // 12
		d*=2;   // 8
		e%=2;   // 1
		printf("a=%d,b=%d,c=%d,d=%d,e=%d\n",a,b,c,d,e);
		
		int p=8,q=7,r=6;
		p&=4;  // 0
		q|=5;  // 7
		r^=3;  // 5
		printf("p=%d,q=%d,r=%d",p,q,r);
}
