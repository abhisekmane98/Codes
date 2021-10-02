//assignment aptech 12
#include<stdio.h>
#include<conio.h>
int main()
{
		int en;
		float bs,da,hra,sa,gs;
		printf("enter employ no. and basic salary");
		scanf("%d%f",&en,&bs);
		da=bs*0.63;
		hra=bs*0.4;
		printf("for employ no. %d \nda=%f,hra=%f",en,da,hra);
		if(bs>=3500)
			printf("\nspecial allowance is 15 and gs=%f",bs+da+hra+bs*0.15);
		else
		    printf("\nNo special allowance and gs=%f",bs+da+hra);
		return 0;
}
