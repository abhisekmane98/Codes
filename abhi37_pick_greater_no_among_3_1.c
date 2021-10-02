// pick greater no. among three
// only problem when a=b=c let output should be 'a' but it gives 'aaa'
#include<stdio.h>
#include<conio.h>
int main()
{
		int a,b,c;
		printf("Enter three No.");
		scanf("%d%d%d",&a,&b,&c);
		if(a>=b && a>=c)
		    printf("%d",a);
		if(b>=c && b>=a)
		    printf("%d",b);
		if(c>=a && c>=b);
		    printf("%d",c);
		return 0;
		    
}
