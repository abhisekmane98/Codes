// not able to find error
#include<stdio.h>
int main()
{
		char a[8],p,q,r,s;
		printf("Enter your name ");
		gets(a);
		puts(a);
	//	printf("%c",a[8]);
	    p=a[7];
	    q=a[6];
	    r=a[5];
	    s=a[4];
	    a[7]=a[0];
	    a[6]=a[1];
	    a[5]=a[2];
	    a[4]=a[3];
	    a[3]=s;
	    a[2]=r;
	    a[1]=q;
	    a[0]=p;
	    puts(a);
	    getch();
	    return 0;
}
