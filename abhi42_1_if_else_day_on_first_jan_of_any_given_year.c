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
		if(a==1)
		    printf("Tuseday");
		else
		    if(a==2)
		        printf("wenesday");
		    else
		       if(a==3)
		          printf("Thursday");
		       else
			      if(a==4)
		             printf("Friday");
		          else
		              if(a==5)
		                  printf("Saturday");
		              else
		                  if(a==6)
		                      printf("Sunday");
		                  else
		                      printf("Monday");
		return 0;
		
		
}
