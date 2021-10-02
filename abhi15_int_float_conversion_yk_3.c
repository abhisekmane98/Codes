// understanding associativity '='assignment operator,right to left,how assigning occurs
#include<stdio.h>
#include<conio.h>
int main()
{
		int a,b,c;
	    a=b=c=3+4;                   /*hierarchy  precedance rule + > =
		                                          7 assigns to c, so value of c is now 7,
	                                              now remain a=b=c=7
	                                              now right to left associativity */
		printf("%d,%d,%d",a,b,c);
		return 0;
}
