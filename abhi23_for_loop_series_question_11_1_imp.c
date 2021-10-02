// class programs on loops 42
// Evaluate 1+1/2+1/3+1/4+.........+1/25 
#include<stdio.h>
#include<conio.h>
int main()
{
		int a;
		float b=0.0;
		for(a=1;a<26;a++)
		{
			b=b+1/a;
		}
		printf("%f",b);
		return 0;
}
 // output is 0 , why ???? think , strong logic int/int
