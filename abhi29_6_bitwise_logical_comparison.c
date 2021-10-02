// difference  ('&' and '&&')  or ('|' and '||') or ('~' and '!')
#include<stdio.h>
#include<conio.h>
int main()
{
		int a,b,c,x=7,p,q,r,s,t,u,v;
		
        a=23&56;          //bitwise and   &
        b=23|56;         // bitwise or    |             bitwise operator   works on bits of binary no.
        c=~5;            // bitwise not   ~
        
        p=x>3||x<6;	     // logical or    ||
	    q=x>3&&x<6;      // logical and   &&            logical operators   evaluate condition/statement  in 'true' or 'false' and give output in '0' and '1'
	    r=!4;            // logical not   !  it is also unary operator so priority is more                      
	    s=!0;
	    t=!-4;           //  any non zero no. is true statement                                     
	    u=!x>4;           
	    v=!x<4;      // a=16,b=63,c=-6
	                //  p=1,q=0,r=0,s=1,t=0,u=0,v=1
	    printf("a=%d,b=%d,c=%d,p=%d,q=%d,r=%d,s=%d,t=%d,u=%d,v=%d",a,b,c,p,q,r,s,t,u,v);
		return 0; 
		
}
