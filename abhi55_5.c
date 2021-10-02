// error at line 38 'q' should replaced by 'p'
// prime factorization
#include<stdio.h>
#include<math.h>
void primefact(int);
int prime(int,int);

int main()
{
		int n;
		printf("Enter a No.");
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
	     	        printf("power of (a)%d is (b)%d-1\n",a,b);          //   if(x%pow(a,b)==0)  wrong because modulus operator works only on int
	     	        getch();
	     	        a=prime(a++,x);                      // call by passing value	 
		       }
	     	
	    }
}
/* to take prime no. only ie 2 3 5 7 11........as 'a' ie to remove 4,5,8,10.......as  'a' 
    checking 'p' is prime no. or not
*/
int prime(int p,int q)
{
		int b,r;
		for(b=2;b<=p-1;b++)
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
		return p;
		  
}
