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
		if(a%4==0)
		   if(a%100!=0)
		      printf("leap year");
		    else
		        if(a%400==0)
		           printf("leap year");
		        else
		           printf("Not leap year");
}
