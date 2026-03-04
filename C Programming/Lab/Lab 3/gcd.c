//gcd
#include<stdio.h>
void main()
{
	int a,b,p,q,gcd,r;
	printf("Enter 2 non-negative numbers : ");
	scanf("%d%d",&a,&b);
	if(a==0 && b==0)
		printf("GCD of both 0 doesn't exist.");
	else
	{
		p=a;
		q=b;
		while(b!=0)
		{
			r=a%b;
			a=b;
			b=r;
		}
		gcd=a;
		printf("GCD of %d and %d = %d",p,q,gcd);
	}
}
