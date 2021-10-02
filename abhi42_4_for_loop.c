// if monday on 1/1/1 then calculate first day of any input year
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>  // exit(0)
int main()
{
	for(;;)
	{
		int y,p,q,a;
		int x;         // to terminate program
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
		printf("\nEnter 1 to continue program \nEnter any num_key to Exit progam"); // if enter character it give run time error ??  %d
		scanf("%d",&x);
		switch(x)
		{
				case 1:
					printf("OK,Wait a second");
					break;
				default:
					exit(0);
		}
		system("CLS");
    }
		return 0;
}
