// while
// pick greater No. among three
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>   // cls,pause
int main()
{
	while(1)
	{
		int a,b,c;
		printf("Enter three No.");
		scanf("%d%d%d",&a,&b,&c);
		a>b && a>c ?  printf("%d",a): b>c ? printf("%d",b) : printf("%d",c);
	/*	                               cond.  if statement     else statement
	   condition     if statement            else statement	 */
        system("pause");    // we can modify by entering switch() to terminate program as it is non terminating program case here
        system("CLS");
	}
	   return 0;
}
