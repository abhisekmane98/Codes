// find Error again
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	while(1)
	{	
		int in,qo,r;                         //in=item No,qo=quantity orderd
		float up,oa,dis,na;                  //unit price,orderd amount,discount,net ammpount
		int a;                               // to stop program
		printf("Enter item No. \nquantity orderd \nunit price\n");
		scanf("%d%d%f",&in,&qo,&up);
		oa=qo*up;
	//	printf("orderd amount of item no.%d is %f\n",in,oa);
		if(1==oa<0 || qo<0 || up<0 )
		    printf("Invalid entry of quantity orderd or unit price\n\n");
		else
		{
	        printf("orderd amount of item no.%d is %f\n",in,oa);
		    if(oa<=10000)
		       r=5;                           // discount rate
		    else
		        if(oa<=25000)                  /*  else if ladder ids basically nesting in else m*/
		            r=10;
	  	        else 
		            r=15;
	    
	     	na=oa-oa*r/100;
	  	    printf("Net amount is %f\n\n",na);
		    printf("Enter 1 if you want to calculate net amount for another item No. \nEnter 2 if you want to exit program\n");
		    scanf("%d",&a);
		    switch(a)
		    {
			case 1:break;                   // throw out of switch body3
			case 2:exit(0);
			default:printf("wrong input");
		    }
		    
	    }
	    system("pause");
	    system("CLS");       // if 'if block' execute then also we want pause and clear screen think ???
    }
	return 0;
}
/* error1 can't solve  line 33 and it should go again to line 27
   error2 we can modify program on concept in=1 qo=-5,up=-4  program runs as oa became positive as negative*negative=positive 
   */
