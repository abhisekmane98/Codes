//
#include<stdio.h>
#include<conio.h>
int add(void);
int main()
{
		int x;
		x=add();
		printf("%d",x);
		return 0;
		
}

add()
{
		int a,b,c;
		printf("Enter two No.");
		scanf("%d %d",&a,&b);
		c=a+b;
		return c;
}
