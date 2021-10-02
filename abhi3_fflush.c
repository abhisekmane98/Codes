//
#include<stdio.h>
#include<conio.h>
int main()
{
		char x,y;
		printf("Enter a character");
		fflush(stdin);
		scanf("%c%c",&x,&y);                // while entering character value not write '' as they use only when writing code
		printf("%c,%c,%d,%d",x,y,x,y);      
		return 0;
}
