#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,u,v,w,x,y,z;
	float c,d;
	char e,f;
	double g,h;
	
	printf("enter 2 integer values");
	scanf("%d%d",&a,&b);
	printf("enter 2 real values");
	scanf("%f%f",&c,&d);
	printf("enter 2 character");
	fflush(stdin);                                  /*  what we enter or type on keyboard it moves randomly as memory of char is 1 byte 
	                                                    so it pick up value from this random data 
	                                                    befor in put taken by user so to remove these unwanted data we use fflush(stdin) */
	scanf("%c%c",&e,&f);
	printf("enter 2 values of double");
	scanf("%lf%lf",&g,&h);
	printf("\nsolution is \nvalue of a,b %d,%d\nvalue of c,d %f,%f\nvalue of e,f %c,%c,%d,%d\nvalue of g,h %lf,%lf",a,b,c,d,e,f,e,f,g,h);
	u=sizeof(a);        // 2
	v=sizeof(c);        // 4
	w=sizeof(e);        // 1
	x=sizeof(g);        // 8
	y=u+v+w+x;          
	printf("\nu,v,w,x and y is %d,%d,%d,%d and %d",u,v,w,x,y);
	return 0;
}
