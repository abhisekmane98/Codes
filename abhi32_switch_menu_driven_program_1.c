//
#include<stdio.h>
#include<conio.h>
int main()
{
		int choice,a,b,c;
		printf("1.addition \n2.odd even \n3.printing 'n' Natural no. \n\nEnter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter two no.");
				scanf("%d%d",&a,&b);
				printf("%d",a+b);
				break;
				
			case 2:
				printf("Enter a no.");
				scanf("%d",&a);
				if(a%2==1)
				   printf("odd number");
				else
				   printf("even number");
				break;
				   
			case 3:
				printf("Enter a no.");
				scanf("%d",&a);
				b=1;
				if(a>0)
					while(b<=a)
				    {
					    printf("%d",b);
					    b++;
				    }  
			    else
			        printf("No Natural no. exist");
			    break;
			        
			default:
			    printf("invalid choice");
	   }
	   return 0;
	
				    
				    
			
}
		

