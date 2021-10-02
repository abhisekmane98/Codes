//
#include<stdio.h>
#include<conio.h>
int main()
{
		int in,qo,r; //in=item No,qo=quantity orderd 
		float up,oa,dis,na; //unit price,orderd amount,discount,net ammpount
		printf("Enter item No. \nquantity orderd \nunit price\n");
		scanf("%d%d%f",&in,&qo,&up);
		oa=qo*up;
		printf("orderd amount of item no.%d is %f\n",in,oa);   // wrong it should be in else
		if(oa<0)
		    printf("Invalid entry of quantity orderd and unit price");
		else
		    if(oa<=10000)
		       r=5;                      // discount rate
		    else
		        if(oa<=25000)            /*  else if ladder ids basically nesting in else m*/
		            r=10;
		        else 
		            r=15;
		na=oa-oa*r/100;
		printf("%f",na);
		return 0;
}
		            
		            
		
