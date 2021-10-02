//
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	while(1)
	{	
		int in,qo,r;                         //in=item No,qo=quantity orderd
		float up,oa,dis,na;                  //unit price,orderd amount,discount,net ammpount
		printf("Enter item No. \nquantity orderd \nunit price\n");
		scanf("%d%d%f",&in,&qo,&up);
		oa=qo*up;
		printf("orderd amount of item no.%d is %f\n",in,oa);     // wrong ist should be in else
		if(oa<0)
		    printf("Invalid entry of quantity orderd and unit price\n\n");
		else
		    if(oa<=10000)
		       r=5;                           // discount rate
		    else
		        if(oa<=25000)                  /*  else if ladder ids basically nesting in else m*/
		            r=10;
		        else 
		            r=15;
		na=oa-oa*r/100;
		printf("Net amount is %f\n\n",na);
		system("pause");
		system("CLS");
    }
		return 0;
}
/* we can modify program on concept in=1 qo=-5,up=-4  program runs as oa became positive as negative*negative=positive */
