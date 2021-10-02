// sum of digits of 5 digit no.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a5,a4,a3,a2,a,b,c,d,e,x;
	printf("Enter 5 digit no.");  
	scanf("%d",&a5);
	e=a5%10;                        // a5=abcde is 5 digit no.
	a4=(a5-e)/10;                   // a4=abcd
	d=a4%10;
	a3=(a4-d)/10;
	c=a3%10;
	a2=(a3-c)/10;
	b=a2%10;
	a=(a2-b)/10;
	x=a+b+c+d+e;
	printf("sum of digits of no. %d%d%d%d%d is %d",a,b,c,d,e,x);   
	return 0;
			
}
