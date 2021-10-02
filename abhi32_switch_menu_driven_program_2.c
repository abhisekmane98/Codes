//
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>      // system("CLS") and system("pause")
int main()
{
	int choice,a,b,c;
	while(1)
	{
	    	
		printf("1.addition \n2.odd even \n3.printing 'n' Natural no. \n4.Exit \n\nEnter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter two no.");
				scanf("%d%d",&a,&b);
				printf("%d\n",a+b);
				break;
				
			case 2:
				printf("Enter a no.");
				scanf("%d",&a);
				if(a%2==1)
				   printf("odd number\n");
				else
				   printf("even number\n");
				break;
				   
			case 3:
				printf("Enter a no.");
				scanf("%d",&a);
				b=1;
				if(a>0)
					while(b<=a)
				    {
					    printf("%d\n",b);
					    b++;
				    }  
			    else
			        printf("No Natural no. exist\n");
			    break;
			
			case 4:exit(0);
			        
			default:
			    printf("invalid choice\n");
	   }
	   system("pause");
	   system("CLS");
    }
	   return 0;
	
	
				    
				    
			
}
