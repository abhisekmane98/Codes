// pick larger value
#include<stdio.h>
#include<conio.h>
int main()
{
		int a,b,x;
		printf("Enter two numbers");
		scanf("%d%d",&a,&b);
		x=a>b?a:b;
		printf("%d",x);
		return 0;
}
