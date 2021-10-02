// 
#include<stdio.h>
#include<conio.h>
int add(int,int,int);
int main()
{
		int a,b,c,x;
		printf("Enter three No.");
		scanf("%d %d %d",&a,&b,&c);
		x=add(a,b,c);   /* called by passing value
		                   order of passing argument doesen't matter */
		       
		printf("%d",x);
		return 0;
		
}

int add(int p,int q,int r)
{
		return(p+q+r);
}
