// Evaluate=2*5+5*9+8*13+.....+29*41
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c=0;
	for(a=2,b=5;a<9;a+=3,b+=4)
	{
			c=c+a*b;
    }
    printf("%d",c);
    return 0;
}
