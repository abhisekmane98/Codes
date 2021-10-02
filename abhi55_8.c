#include<stdio.h>
int main()
{
		int a;
		printf("Enter a Number\n");
		scanf("%d",&a);
		a=a++;                         /* 1.  in RAM a is store
     	                                  2.   whole instruction/statement go to processor
		                                  3.   instruction statement follow in precedence rule
										  4.   value of a assigns to a,now this a store with value in RAM, so a is out of processor
		                                  5.   let user enter 3
		                                       a=a++ now afte step 4 a is out of processor
		                                         3++  so processor increment 3 but where to store so garbage move fflush
		                                       
		                                     
		printf("%d",a);
		return 0;
}
