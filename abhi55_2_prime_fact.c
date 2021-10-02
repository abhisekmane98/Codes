// modify : 42 p++ ,not necessary that p++ is prime ?????think
// prime factorization
#include<stdio.h>
#include<math.h>
void primefact(int);
void prime(int);

int main()
{
		int n;
		printf("Enter a No.");
		scanf("%d",&n);
		primefact(n);    // call by passing value
		return o;
		
}

void primefact(int x)
{
	    int c;
	    float a,b;
		for(a=2,b=1;;b++)
	    {
	    	   c=pow(a,b);
			   if(x%c!=0)                          //   if(x%pow(a,b)==0)  wrong because modulus operator works only on int
	     	        printf("power of a is b-1");
	     	        prime(a++);                      // call by passing value
	     	        a=p;
	     	
	    }
}
//  to take prime no. only ie 2 3 5 7 11........as 'a' ie to remove 4,5,8,10.......as  'a' 
void prime(int p)
{
		int b,r;
		for(b=2;b<=n-1;b++)
		{
			r=p%b;
			if(r==0) 
			{
			    printf("Consonant");       // loop only stops when p became prime No.
				p++;			                                
			    b=2;
		    }
		}
		if(r!=0)
		  printf("Prime No. is 'p' ");
		  
}
