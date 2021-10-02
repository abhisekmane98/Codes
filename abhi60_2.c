//
#include<stdio.h>
int main()
{
		int a[10];
		int r;
		int x;
		a[0]=11;
		a[1]=12;
		a[9]=20;
		
		printf("enter 7 values to store in array a[10]");
		for(r=2;r<=8;r++)
		scanf("%d",&a[r]);
		
		printf("Enter any index No.,i will give you value stored in it");
		scanf("%d",&x);
		printf("%d",a[x]);
		
		return 0;
		
}
