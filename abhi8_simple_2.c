//conversion in km,m,cm,feet,inch
#include<stdio.h>
#include<conio.h>
int main()
{
	int km,meters,cm;
	float feets,inches;
//	clrscr();
	printf("distance between two cities in km");
	scanf("%d",&km);
	meters=km*1000;
	cm=meters*10;
	feets=meters*3.281;
	inches=12*feets;
	printf(" conversion in metere %d \n conversion in cm %d",meters,cm);
	printf("\n conversion in feets %f \n conversion in inches %f",feets,inches);
//	getch();
}
