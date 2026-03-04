//hcf using recursion
#include<stdio.h>
int hcf(int,int);
void main()
{
	int a,b,h;
	printf("Enter 2 integers : ");
	scanf("%d%d",&a,&b);
	if(a==0 && b==0)
		printf("HCF of both 0 doesn't exist.");
	else if(a<0 || b<0)
		printf("HCF of negative number doesn't exist.'");
	else
	{
		h=hcf(a,b);
		printf("HCF of %d & %d = %d",a,b,h);
	}
}
int gcd(int a,int b)
{
	if(b==0)
		return(a);
	else
		return(gcd(b,a%b));
}
