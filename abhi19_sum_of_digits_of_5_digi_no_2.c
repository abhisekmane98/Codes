// sum of digits of 5 digi no.
// best approach
#include<stdio.h>
#include<conio.h>
int main()
{
		int a5,a4,a3,a2,a,b,c,d,e,x;
		printf("Enter 5 digit no.");
		scanf("%d",&a5);
		e=a5%10;                      // a5=abcde
		a2=a5%100;                    // a2=de
		d=a2/10;
		a3=a5%1000;                   // a3=cde
		c=a3/100;
		a4=a5%10000;                  // a4=bcde
		b=a4/1000;
        a=a5/10000;
        x=a+b+c+d+e;
		printf("sum of digits of no. %d%d%d%d%d is %d",a,b,c,d,e,x);	
		printf("\n %d",a5);
		return 0;
}
