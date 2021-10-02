// system("CLS");
// system("pause");
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>        
int main()
{
	int c,w,h;
	while(1)	
	{   
		system("CLS");
		printf("catagory 1 \ncatagory 2 \ncatagory 3 \ncatagory 4 \nexit program 5\n\n");
		printf("Enter catagory of workers");
		scanf("%d",&c);
		switch(c)
		{   
			case 1:
				printf("Enter No. of workers and hours to be worked");
				scanf("%d%d",&w,&h);
				printf("wages is %d",w*h*10);
				break;
			case 2:
				printf("Enter No. of workers and hours to be worked");
				scanf("%d%d",&w,&h);
				printf("wages is %d",w*h*8);
				break;
			case 3:
				printf("Enter No. of workers and hours to be worked");
				scanf("%d%d",&w,&h);
				printf("wages is %f",w*h*6.5);
				break;
			case 4:
				printf("Enter No. of workers and hours to be worked");
				scanf("%d%d",&w,&h);
				printf("wages is %f",w*h*3.5);
				break;
			case 5:exit(0);
			default:
				printf("Invalid catagory enterd");
		     
        }
        system("pause");
    }
    return 0;
}

