#include<stdio.h>
int main()
{
		char a[5];
		int i;
		printf("Enter 5 No.");
		
		for(i=0;i<=4;i++)
		   scanf("%c",&a[i]);
		    
		printf("%s",&a);    // focus on this line
		return 0;

}
