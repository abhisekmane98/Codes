// checking function is even or not
// check error
#include<stdio.h>
enum boolean iseven(int);
enum boolean
{
	true,false
};

enum boolean iseven(int c)
{
	if(c%2==0)
	  return(true);
	else
	   return(false);
}

int main()
{
	int a;
	enum boolean result;       // boolean is data type and a is boolean type variable variable
	printf("Enter a number");
	scanf("%d",&a);
	result=iseven(a);
	return 0;
	
	
}
