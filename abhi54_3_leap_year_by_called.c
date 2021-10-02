//
#include<stdio.h>
void leap(int);
int main()
{
		int y;
		printf("Enter a year");
		scanf("%d",&y);
		leap(y);
		return 0;
		
}
void leap(int a)
{
		if((a%4==0 && a%100!=0)||(a%4==0 && a%100==0 && a%400==0))
		   printf("Leap year");
		else
		   printf("Not Leap year");
}
