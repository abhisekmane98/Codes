//  take something 
//  returrn nothing
#include<stdio.h>
#include<conio.h>
void reminder(int,int)
{
		int a,b;
		printf("Enter a No.");
		scanf("%d %d",&a,&b);
		reminder();
		return 0;
}
void reminder(int p,int q)
{
		int r;
		r=p%q;
		printf("%d",r);
		
}
