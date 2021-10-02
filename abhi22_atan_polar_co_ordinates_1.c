// convert cartesian co-ordinates into polar
// atan()
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
		
		fwloat a,b,r,angle;
		printf("Enter cartesian co-ordinates");
		scanf("%f%f",&a,&b);                       // a=rcos0,b=rsin0
		r=a*a+b*b;
		r=pow(r,0.5);                              // or sqrt()
		angle=atan(b/a);                           // inverse of(x)=atan(x)
		angle=angle*180/3.14;                      // output is in radian so convet into degree
		printf("polar co-ordinates are %f,%f",r,angle);
		return 0;
		
		
		
}
