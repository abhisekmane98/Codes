//  take something 
//  returrn something
#include<stdio.h>
#include<conio.h>
float add(float,float,int);
int main()
{
		int c;
		float a,b,x;
	//	clrscr();
		printf("Enter two real no. and one integer respectively");
		scanf("%f %f %d",&a,&b,&c);
		x=add(a,b,c);                    // calling function by passing values
		printf("%f",x);
		getch();
		return 0;
}

float add(float p,float q,int r)
{
		return p+q+r;
}
