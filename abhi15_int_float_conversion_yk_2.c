// associativity understanding  y.k p.no.33 [b](d)
#include<stdio.h>
#include<conio.h>
int main()
{
		int a;
		a=1/2*3.5*3.5;   /*hierarchy   a=1/2*3.5*3.5
		                               a=0*3.5*3.5    integer/integer=integer
		                               a=0.0*3.5*3.5  integer*real then first integer prompted to real
		                               a=0.0*3.5
		                               a=0.0
		                               a=0             a is int type so 0.0 demoted to 0 */
		                               
		printf("%d",a);
		return 0;
}
