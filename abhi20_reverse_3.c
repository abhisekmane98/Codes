// reverse of 5 digit no.
#include<stdio.h>
#include<conio.h>
int main()
{
		int n,a,s;
		printf("Enter 5 digit no.");
		scanf("%d",&n);
        a=n%10;                          // n=jklmn  a=n
        s=a*10000;                       // s=n0000
        n=n/10;                          // n=jklm
        a=n%10;                          // a=m
        s=s+a*1000;                      // s=nm000
        n=n/10;
        a=n%10;
        s=s+a*100;
        n=n/10;
        a=n%10;
        s=s+a*10;
        n=n/10;
        s=s+n;
        printf("reversr of no. is %d",s);
        return 0;
        
}
