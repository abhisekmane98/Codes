// checking function is even or not
#include<stdio.h>
enum boolean iseven(int);
void display(enum boolean);

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

void display(enum boolean r)
{
    if(r==true)
       printf("Even No.");
    else
       printf("Odd No.");
}

int main()
{
	int a;
	enum boolean result;       // boolean is data type and a is boolean type variable variable
	printf("Enter a number");
	scanf("%d",&a);
	result=iseven(a);
	display(result);
	return 0;
	
	
}
