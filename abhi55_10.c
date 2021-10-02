// find error
// prime factorization
#include<stdio.h>
#include<math.h>
void primefact(int);
int prime(int);

int main()
{
		int n;
		printf("Enter a No.\n");
		scanf("%d",&n);
		primefact(n);    // call by passing value
		return 0;
		
}

void primefact(int x)
{
	    int c;
	    float a,b;
		for(a=2,b=1;a<=x;b++)
	    {
	    	   c=pow(a,b);
			   if(x%c!=0)    
			   {                                      
	     	        printf("power of %f is %f\n",a,b-1);          //   if(x%pow(a,b)==0)  wrong because modulus operator works only on int
	     	        getch();
	     	        a++;
	     	        a=prime(a);      
					b=1;                // call by passing value	 
		       }
	     	
	    }
}
/* to take prime no. only ie 2 3 5 7 11........as 'a' 	ie to remove 4,5,8,10.......as  'a' 
    checking 'p' is prime no. or not
*/
int prime(int p)
{
		int b,r;
		for(b=2;b<=p-1;b++)
		{
			r=p%b;
			if(r==0) 
			{
			    printf("Consonant\n");       // loop only stops when p became prime No.
				p++;			                                
			    b=2;
		    }
		}
		if(r!=0)
		  printf("Prime No. is %d\n",p);
		return (p);
		  
}
