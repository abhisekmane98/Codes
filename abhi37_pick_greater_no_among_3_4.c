// pick greater No. among three
// Error check
#include<stdio.h>
#include<conio.h>
int main()
{
		int a,b,c;
		printf("Enter three No.");
		scanf("%d%d%d",&a,&b,&c);
		a>b && a>c ?  printf("%d",a); b>c ? printf("%d",b); : printf("%d",c);
	                          /*    *                     *
	                                *                     *
	                                *                     *
	                                *                     *       wrong  */
	    return 0;
}
