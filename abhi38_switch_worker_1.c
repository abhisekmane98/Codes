// aptech 21
#include<stdio.h>
#include<conio.h>
int main()
{
		int c,w,h;
		float r,a;
		printf("catagory 1 \ncatagory 2 \ncatagory 3 \ncatagory 4\n\n");
		printf("Enter category of worker \nNo. of workers \nhours worked");
		scanf("%d%d%d",&c,&w,&h);
		if(c=1)
		    r=10;
		else 
		    if(c=2)
		      r=8;
	    	if(c=3)
		      r=6.5;
	    	if(c=4)
		      r=3.5;
		    else
		    printf("invalid catagory enterd");
		    
	     a=w*h*r;
		printf("%f",a);
		return 0;		    
		
}
