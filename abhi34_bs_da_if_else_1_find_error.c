//assignment aptech 12
// think why program is not running
#include<stdio.h>
#include<conio.h>
int main()
{
		int en;
		float bs,da,hra,sa,gs;
		printf("enter employ no. and basic salary");
		scanf("%d%f",&en,&bs);
		printf("for employ no. %d \nda=%f,hra=%f",en,bs*0.63,bs*0.4);
		if(bs>=3500)
			printf("\nsa=%f and gs=%f",bs*0.15,bs+da+hra+sa);
		else
		    printf("\nNo special allowance and gs=%f",bs+da+hra);
		return 0;
}
