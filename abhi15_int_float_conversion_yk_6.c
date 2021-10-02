// magic of int float conversion,rule of % operator
#include<stdio.h>
#include<conio.h>
int main()
{
		float a=5,b=2;           /*  this statement identicle to float a,b;
		                                                         a=5;
		                                                         b=2;
		                             now a=5 but a is float so value on right side adjust by prompting to 5.000000,simillarly for b */
		int c,d;
		c=a%b;                  // 5.000000%2.000000  but '%' modulas operator cannot operate on float,give compilation error
		d=a/2;
		printf("c=%d,d=%d",c,d);
		return 0;
}
