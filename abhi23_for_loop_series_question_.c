// Evaluate (1*2*3)+(3*4*5)+(5*6*7)+........+(21*22*23)
#include<stdio.h>
#include<conio.h>
int main()
{
		int a,b,c,d=0;
	    for(a=1,b=2,c=3;a<22,b<23,c<24;a+=2,b+=2,c+=2)
	    {
	    		d=d+a*b*c;
		}
		printf("%d",d);
		return 0;
}
