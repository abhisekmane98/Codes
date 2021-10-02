// aptech 16
#include<stdio.h>
#include<conio.h>
int main()
{
		float l,r,si;
		printf("Enter amount of loan");
		scanf("%f",&l);
		if(l<0)
		    printf("invalid amoarunt of loan");
		else
			if(l>=0 && l<10000)
		   	    r=5;
			else 
			    if(l>=10000 && l<50000)
				    r=7;
			    else
				    r=10;
		si=l*r*10/100;
		printf("%f",si);
		return 0;
}
