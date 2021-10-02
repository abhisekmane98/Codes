// sum of digits og 5 digit no. ,best effective soiution
#include<stdio.h>
#include<conio.h>
int main()
{
		int n,b,s;
		printf("Enter 5 digit no.");
		scanf("%d",&n);
		s=n%10;
		n=n/10;
		b=n%10;
		s=s+b;
		n=n/10;
		b=n%10;
		s=s+b;
		n=n/10;
		b=n%10;
		s=s+b;
		n=n/10;
		s=s+n;
		printf("sum of digits of entered 5 digit no. is %d",s);
		return 0;
		
}
