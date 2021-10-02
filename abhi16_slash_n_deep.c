// understand \n,back slash n
#include<stdio.h>
#include<conio.h>
int main()
{
		printf("nn \n\n nn\n");  /* no role of 1st space as after that \n\n cursor moves two line down ie at starting of 4th line
		                            now role of 2nd space it moves cursor one step forwrd and print nn
		                            printf("nn\n\n nn");
		                            printf("\nnn /n/n nn/n");
		                            then also same output no matter '\n' is at end of 1st printf or at start of 2nd printf */
		printf("nn /n/n nn/n");
		return 0;
}
