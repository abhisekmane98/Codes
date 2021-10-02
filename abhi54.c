//
#include<stdio.h>
long int fact(int);
int main()
{
		int x,n;
		printf("Enter a No.");
		scanf("%ld",&n);
		x=fact(n);
		printf("%ld",x);
		return 0;
		
}
long int fact(int a)
{       int b;
		for(a,b=1;a>=1;a--)
		   b=b*a;
		return b;
}
