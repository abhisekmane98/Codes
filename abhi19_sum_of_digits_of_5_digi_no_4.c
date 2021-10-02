// sum of digits in 5 digit no.
// this program also done in reverse ie. starting by a5/10
#include<stdio.h>
#include<conio.h>
int main()
{
		int a5,a4,a3,a2,a1,Q1,Q2,Q3,Q4,x;                              // a5 5 digit no.
		printf("Enter five digit no.");
		scanf("%d",&a5);
		Q1=a5/10000;                         // Q1 qotient1
		a4=a5-Q1*10000;                      // a4 is last4 digit no.
		Q2=a4/1000;                          // Q2 quotient2
		a3=a4-Q2*1000;                       // a3 is last3 digit no.
		Q3=a3/100;                           // Q3 quotient3
		a2=a3-Q3*100;                        // a2 is last 2 digit no,
		Q4=a2/10;                            
		a1=a2-Q4*10;                          // no. is Q1Q2Q3Q4a1  with space Q1 Q2 Q3 Q4 a1
	    x=Q1+Q2+Q3+Q4+a1;	
		printf("sum of digits of number %d%d%d%d%d is %d",Q1,Q2,Q3,Q4,a1,x);
}
