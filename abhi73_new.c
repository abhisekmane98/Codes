/* taking input by scanf(0 and using '%s' , earlier 1.direct intialization a[5]={1,3,5,..}
                                                    2.scanf() and %d,%c  */
#include<stdio.h>
int main()
{
	    int i;
		char a[6];
		printf("Enter your name\n");
	    scanf("%s",&a);                // a / &a / &a[0]   all are equivalent
	//   	for(i=0;i<=9;i++)
	    printf("%s\n",a);             // a / &a / &a[0]    all are eqivalent
	//    puts(a);
    //	printf("%s",a);   
	    getch();
		return 0;
		
}
