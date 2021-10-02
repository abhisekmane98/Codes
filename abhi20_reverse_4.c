// reverse the no. ,but mistak print same no.,concept is correct
#include<stdio.h>
#include<conio.h>
int main()
{
		int n,a,s;
		printf("Enter 5 digit no.");
		scanf("%d",&n);
		a=n%10;
		n=n/10;
		s=n%10;
		s=s*10+a;
	/*  n=n/100;
		a=n%10;
		s=s+s*1000;
		n=              ,ifyou skip step,then you can't get 3rd digit by any means
		                 basically iam trying to skip and again catching that step by multiplication but it can't  */
		n=n/10;
		a=n%10;
		s=s+a*100;
		n=n/10;
		a=n%10;
		s=s+a*1000;
		n=n/10;
		s=s+n*10000;
		printf("your no. is %d",s);
		return 0;
		
}
