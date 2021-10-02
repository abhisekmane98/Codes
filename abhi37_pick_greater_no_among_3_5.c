// pick greater No. among three
#include<stdio.h>
#include<conio.h>
int main()
{
		int a,b,c;
		printf("Enter three No.");
		scanf("%d%d%d",&a,&b,&c);
		a>b && a>c ?  printf("%d",a): b>c ? printf("%d",b) : printf("%d",c);
	/*	                               cond.  if statement     else statement
	   condition     if statement            else statement	 */
	   return 0;
}
