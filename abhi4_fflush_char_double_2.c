#include<stdio.h>
#include<conio.h>
int main()
{	int a,b,u,v,w,x,y,z;
	float c,d;
	char e,f;
	double g,h;
	printf("enter 2 character");

	scanf("%c%c",&e,&f);
		fflush(stdin);
	printf("enter 2 integer values");
	scanf("%d%d",&a,&b);
	printf("enter 2 real values");
	scanf("%f%f",&c,&d);
	
	printf("enter 2 values of double");
	scanf("%lf%lf",&g,&h);
	printf("value of a,b %d,%d\nvalue of c,d %f,%f\nvalue of e,f %d,%d\nvalue of g,h %lf,%lf",a,b,c,d,e,f,g,h);
	u=sizeof(a);
	v=sizeof(c);
	w=sizeof(e);
	x=sizeof(g);
	y=a+c-e+g;
	printf("u,v,w,x and y is %d,%d,%d,%d and %d",u,v,w,x,y);
	return 0;
}
