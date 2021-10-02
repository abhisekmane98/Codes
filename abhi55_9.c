#include<stdio.h>
int main()
{
		int a,b=3;
		printf("Enter a Number\n");
		scanf("%d",&a);
		a=b++;                         /* 1.   in RAM a,b=3 are store
		                                  2.   whole instruction/statement go to processor
		                                  3.   instruction statement follow in precedence rule
										  4.   value of b assigns to a,now this a store with value in RAM, so a is out of processor
		                                  5.   then increment in value of b and b stores with value in RAM, so b is out of processor    */
		printf("%d,%d",a,b);
		return 0;
}
