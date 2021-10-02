// wcf=wind chill factor
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
		float wcf,v,t;
		printf("enter velocity of wind and temperature of air");
		scanf("%f%f",&v,&t);
		wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
		printf("%f",wcf);
		return 0;
}
