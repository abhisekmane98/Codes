// take co-ordinates of any two points and then print the distance between them in nauticle miles
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
		float L1,L2,G1,G2,d;   
		printf("Enter co-ordinates ie in degrees of any place (L1,G1) on earth surface");
		scanf("%f%f",&L1,&G1);                                                     // ??? L1=north,south  longitude=east,west sort by put -90 to 90 
		L1=L1*3.14/180;                                                            //     G1=easst,west   longitude=east,west sort by -180 to 180
		G1=G1*3.14/180;
		printf("Enter co-ordinates ie in degrees of another place (L2,G2) on earth surface");
		scanf("%f%f",&L2,&G2);
		L2=L2*3.14/180;
		G2=G2*3.14/180;
		d=3963*acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G2-G1));           // angles in this formula should be in radian
		printf("Distance between these places is %f",d);
		return 0;
}
