// if monday on 1/1/1 then calculate first day of any input year
#include<stdio.h>
#include<conio.h>
int main()
{
		int y,p,q,a;
		printf("Enter a year");
		scanf("%d",&y);
		p=y-1;
		q=p+p/4-p/100+p/400;   
		a=q%7;
		switch(a)
		{
			case 1:
				printf("Tuseday");
				break;
				break;
			case 2:
				printf("Wenesday");
				break;
			case 3:
				printf("Thursday");
				break;
			case 4:
				printf("Friday");
				break;
			case 5:
				printf("Saturday");
				break;
			case 6:
				printf("Sunday");
				break;
			default:                    // this run only when a=0 because only a=0,1,2,3,4,5 
				printf("Monday");
			
		}
		return 0;
}
