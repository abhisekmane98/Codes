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
			    printf("si for 10 years is %f",l*10*5/100);    // r=5
			else 
			    if(l>=10000 && l<50000)
			        printf("si for 10 years is %f",l*10*7/100);  // r=7
			    else
			        printf("si for 10 years is %f",l*10*10/100);  // r=10
			        
		return 0;
}
