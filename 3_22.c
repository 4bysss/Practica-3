#include <stdio.h>

int x=2;

void a()
{
	 printf("%d\n",x);
	  x=x*2;
	   printf("%d\n",x);
}
void b()
{
	 static int x=4;
	  x*=3;
	   printf("%d\n",x);
}
void c(int x)
{
	 x=x*2;
	  printf("%d\n",x);
	   b();
}
void d(int *x)
{
	 *x=*x+1;
	  printf("%d\n",*x);
}
int main()
{
	 int x=5;
	  {
		   int x=7;
		    printf("%d\n",x);
		     }
	   printf("%d\n",x);
	    a();
	     printf("%d\n",x);
	      b();
	       printf("%d\n",x);
	        c(x);
		 printf("%d\n",x);
		  b();
		   printf("%d\n",x);
		    d(&x);
		     printf("%d\n",x);
		      return 0;
}
