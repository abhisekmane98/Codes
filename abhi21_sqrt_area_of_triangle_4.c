// area of triangle with given sides using sqrt() function
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
		int a,b,c;
		float s,A;
		printf("enter lengths of sides of triangle");
		scanf("%d%d%d",&a,&b,&c);
		s=(a+b+c)/2;
		A=sqrt(s*(s-a)*(s-b)*(s-c));
   	//  A=pow(A,0.5);
		printf("area of triangle of side lengths %d,%d,%d is %f",a,b,c,A);
		return 0;
		
		
}
