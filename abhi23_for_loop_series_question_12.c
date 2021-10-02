// Evaluate 2/3+4/5+6/7+.......+20/21
#include<stdio.h>
#include<conio.h>
int main()
{
		float a,b,c=0.0;
	    for(a=2,b=3;ab<=7;a+=2,b+=2)
	    {
	    	c=c+a/b;
		}
		printf("%f",c);
		return 0;
}
