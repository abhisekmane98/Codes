// find error
#include<stdio.h>
#include<conio.h>
int main()
{
		int c,w,h;
		printf("catagory 1 \ncatagory 2 \ncatagory 3 \ncatagory 4\n\n");
		printf("Enter catagory ");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				printf("Beautiful");break;
			case 2:
			    printf("Healthy");break;
			case 3:
			    printf("Calm");break;
			case 1+2:
				printf("Lovely");break;
	    }
	    printf("vivek");
	    return 0;
}
			
