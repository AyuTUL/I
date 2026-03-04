//sum of digits of 3 digit no.
#include<stdio.h>
void main()
{
	int n,temp,u,t,h,s;
	printf("Enter 3 digit number : ");
	scanf("%d",&n);
	temp=n;
	u=n%10;
	n=n/10;
	t=n%10;
	n=n/10;
	h=n%10;
	s=u+t+h;
	printf("\nSum of digits of %d = %d",temp,s);
}