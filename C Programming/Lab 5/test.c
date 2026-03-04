#include<stdio.h>
void main()
{
	int r,a,b,l,g,f;
	a=g=72;
	b=f=120;
	while(b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
    l=(g*f)/a;
   printf("%d",l);
	}
