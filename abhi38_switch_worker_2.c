// find error
#include<stdio.h>
#include<conio.h>
int main()
{
		int c,w,h;
		printf("catagory 1 \ncatagory 2 \ncatagory 3 \ncatagory 4\n\n");
		printf("Enter catagory of workers");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				printf("Enter No. of workers and hours to be worked");
				scanf("%d%d",&w,&h);
				printf("wages is %d",w*h*10);
			case 2:
				printf("Enter No. of workers and hours to be worked");
				scanf("%d%d",&w,&h);
				printf("wages is %d",w*h*8);
			case 3:
				printf("Enter No. of workers and hours to be worked");
				scanf("%d%d",&w,&h);
				printf("wages is %f",w*h*6.5);
			case 4:
				printf("Enter No. of workers and hours to be worked");
				scanf("%d%d",&w,&h);
				printf("wages is %d",w*h*3.5);
		//	default:
				printf("Invalid catagory enterd");
	    }
	    printf("vivek");
	    return 0;
				
				
}
