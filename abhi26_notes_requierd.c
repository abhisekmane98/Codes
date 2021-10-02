//
#include<stdio.h>
#include<conio.h>
int main()
{
		int n,s;
		printf("Enter amount in Rs");
		scanf("%d",&n);                   
		s=n/100;                           
		n=n%100;                           
		s=s+n/50;                      
		n=n%50;
		s=s+n/10;
		n=n%10;
		s=s+n/5;
		n=n%5;
		s=s+n/2;
		n=n%2;
		s=s+n/1;
		printf("minimum no. of notes requierd are %d",s);
		return 0;
				
}
