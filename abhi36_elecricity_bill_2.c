//aptech 20 elctricity charge 
// program never ends
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>  // to include system("CLS") and system("pause")
int main()
{
	while(1)
	{	int cn,uc;     //consumer No. , units consumed
		float a,b,c,d,e;
		printf("Enter consumer No and units used by him");
		scanf("%d%d",&cn,&uc);
		if(uc<0)
		    printf("invalid entry of umits consumed");
		else
		    if(uc<=100)
		       printf("bill amount of consumer NO.%d is %f",cn,50.00);
		    else
			    if(uc<600)
				   printf("bill amount of consumer No.%d is %d",cn,50+(uc-100)*0.7);
				else
				    if(uc<=1600)
				    {
					    a=50+500*0.7+(uc-600)*0.8;
                        if(a<=1000)
					    printf("bill amount of consumer No.%d is %f",cn,a);
				        else
				        {
						   b=50+500*0.7+(uc-600)*0.8;
						   c=b+(b-1000)*10/100;
						   printf("bill amount of consumer No.%d is %f",cn,c);
					    }
					}
					else
					{
					     d=50+500*0.7+1000*0.8+(uc-1600)*0.9;
					     e=d+(d-1000)*10/100;
					     printf("bill amount of consumer No.%d is %f",cn,e);
				    }
    	system("pause");
	    system("CLS");			    
    }   
    return 0;
}
