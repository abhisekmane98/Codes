//interchange the no.
#include<stdio.h>
#include<conio.h>
int main()
{
		int a,b,c;
		printf("Enter two no.");
		scanf("%d%d",&a,&b);
		c=b;
		b=a;
		printf("%d %d",c,b);
		return 0;
}
