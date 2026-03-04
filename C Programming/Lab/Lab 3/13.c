//reverse
#include<stdio.h>
void main()
{
	int n,t,r,rev=0;
	printf("Enter integer : ");
	scanf("%d",&n);
	t=n;
	do
	{
		r=n%10;
		rev=rev*10+r;
		n/=10;
	}while(n!=0);
	printf("Reverse of %d = %d",t,rev);
}
