// blank spaces in sacanf befor and after double inverted comma " "
#include<stdio.h>
#include<conio.h>
int main()
{
		int a,b;
		printf("Enter two values");
		scanf(" %d %d ",&a,&b);
		printf("a=%d,b=%d",a,b);
		return 0;
}
