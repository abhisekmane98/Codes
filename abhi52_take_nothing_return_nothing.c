//  take nothing 
//  returrn nothing
// 
#include<stdio.h>
#include<conio.h>
void quotient(void);
int main()
{
		quotient();
		return 0;
}

void quotient()
{
		int a,b,c;
		printf("enter two No.");
		scanf("%d %d",&a,&b);
		c=a/b;
		printf("%d",c);
		
}
