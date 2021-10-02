//  take something 
//  returrn something
#include<stdio.h>
#include<conio.h>
int add(int,int);
int main()
{
		int a,b,x;
		printf("Enter two No.");
		scanf("%d %d",&a,&b);
		x=add(a,b);                    // calling function by passing values
		printf("%d",x);
		getch();
		return 0;
}

int add(int p,int q)
{
		return p+q;
}
