//armstrong using function
#include<stdio.h>
#include<math.h>
int arm(int);
int len(int);
void main()
{
	int n,a;
	printf("Enter integer : ");
	scanf("%d",&n);
	if(n<0)
		printf("Negative number can't be Armstrong.");
	else
	{
		a=arm(n);
		if(a==1)
			printf("%d is Armstrong.",n);
		else
			printf("%d is not Armstrong.",n);
	}
}
int arm(int n)
{
	int temp,r,s=0,l;
	l=len(n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		s=s+pow(r,l);
		n=n/10;
	}
	if(s==temp)
		return 1;
	else
		return 0;
}
int len(int n)
{
	int l=0;
	while(n!=0)
	{
		n/=10;
		l++;
	}
	return(l);
}
